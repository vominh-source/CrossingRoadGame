// Gamethunghiem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "utils.cpp"
#include <iostream>
#include <thread>
#include <Windows.h>
using namespace std;
bool running = true;

struct Render_State {
	int height, width;//chieu cao, chieu rong cua man hinh console
	void* memory;//tro toi vung bo nho de chua console (moi khi ta tao mot console moi, se can mot luong bo nho ben trong vung nho va khi ta thay doi kich thuoc console
	//=> can mot vung nho moi de chua) do la li do ta dung con tro de co the su dung bo nho heapa
	BITMAPINFO bitmap_info;//luu tru tinh chat(color) cua cai pixel do
};
Render_State render_state;
#include "platform_common.h"
#include "Render.cpp"
#include "Game.cpp"
LRESULT CALLBACK window_callback(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	LRESULT result = 0;
	switch (uMsg)
	{
		case WM_CLOSE:
		case WM_DESTROY: {

			running = false;
		}break;
		case WM_SIZE: {//nhan su thay doi cua man hinh console
			RECT rect;
			GetClientRect(hwnd, &rect);
			render_state.width = rect.right - rect.left;
			render_state.height = rect.bottom - rect.top;
			int size = render_state.width * render_state.height * sizeof(unsigned int);//chua nguyen mot mang to va chua mau cua tung cai pixel
			if (render_state.memory)
			{
				VirtualFree(render_state.memory, 0, MEM_RELEASE);//free cai cu truoc khi khoi tao cai moi
			}
			render_state.memory = VirtualAlloc(0, size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

			render_state.bitmap_info.bmiHeader.biSize = sizeof(render_state.bitmap_info.bmiHeader);
			render_state.bitmap_info.bmiHeader.biWidth = render_state.width;
			render_state.bitmap_info.bmiHeader.biHeight = render_state.height;
			render_state.bitmap_info.bmiHeader.biPlanes = 1;
			render_state.bitmap_info.bmiHeader.biBitCount = 32;
			render_state.bitmap_info.bmiHeader.biSize = sizeof(render_state.bitmap_info.bmiHeader);
			render_state.bitmap_info.bmiHeader.biCompression = BI_RGB;
		
		}break;
		default: {
			result =DefWindowProc(hwnd, uMsg, wParam, lParam);
		}
	}
	return result ;
}
int WinMain(HINSTANCE hInstance, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)//main de su dung nhung cau lenh cua graphic
{
	//create window class// create mot class quy dinh ac dac diem cua window class
	WNDCLASS window_class = {};
	window_class.style = CS_HREDRAW | CS_VREDRAW; //(need this to determine that this is the console that we'll draw in)
	window_class.lpszClassName = "Game Window Class";
	window_class.lpfnWndProc=window_callback;
	//Register class
	RegisterClass(&window_class);//dang ky giu cho (bo nho) de luu cac thong tin can thiet
	//Create Window
	HWND window =CreateWindow(window_class.lpszClassName, "Crossing road game", WS_OVERLAPPEDWINDOW | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, 1200, 720, 0, 0, hInstance, 0);
	HDC hdc = GetDC(window); //need a context window use to draw to it, hdc will take this task
	srand(time(NULL));
	int rect_pos_x;
	int rect_pos_y;
	srand(time(NULL));
	while (running)
	{
		//Input
		Input input = {};
		MSG message;
		for (int i = 0; i < BUTTON_COUNT; i++)//reset lai cac button
		{
			input.buttons[i].changed = false;
		}
		while (PeekMessage(&message, window, 0, 0, PM_REMOVE)) {
			switch (message.message)//cai nay giong kieu nhan input tu window (nut len, xuong)
			{
				case WM_KEYUP:
				case WM_KEYDOWN: {
					u32 vk_code = (u32)message.wParam;//extract the message
					bool is_down = ((message.lParam & (1 << 31)) == 0);//check whether it's keyup or down
#define process_button(b, vk)\
case vk: {\
input.buttons[b].changed = is_down != input.buttons[b].is_down;\
input.buttons[b].is_down = is_down;\
} break;

					switch (vk_code) {
						process_button(BUTTON_UP, VK_UP);
						process_button(BUTTON_DOWN, VK_DOWN);
						
						process_button(BUTTON_LEFT, VK_LEFT);
						process_button(BUTTON_RIGHT, VK_RIGHT);
						
					}
				} break;
				
				default: {
						TranslateMessage(&message);//maybe la nhan+xu li thong tin
						DispatchMessage(&message);
				}
			}
			
			
		}
		
		clear_screen(0x98D0B9);
		
		simulate_game(&input);
		//we have the memory now and need the windows to save and use it
		StretchDIBits(hdc, 0, 0,render_state.width,render_state.height, 0, 0, render_state.width, render_state.height, render_state.memory, &render_state.bitmap_info, DIB_RGB_COLORS, SRCCOPY);
		
	}
	
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
