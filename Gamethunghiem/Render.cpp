#include "Render.h"

void render_background()
{
	unsigned int* pixel = (unsigned int*)render_state.memory;//con tro tro toi pixel ma chung ta muon doi mau
	for (int y = 0; y < render_state.height; y++)//change color of our pixel
	{
		for (int x = 0; x < render_state.width; x++)
		{
			*pixel++ = 0x98D0B9;

		}
	}
}
void clear_screen(unsigned int color)
{
	unsigned int* pixel = (unsigned int*)render_state.memory;//con tro tro toi pixel ma chung ta muon doi mau
	//cung giong nhu con tro, luc nay no dang tro toi phan tu dau tien cua mang, va mang nay tu duoi len
	//
	for (int y = 0; y < render_state.height; y++)//change color of our pixel
	{
		for (int x = 0; x < render_state.width; x++)
		{
			*pixel++ = color;
		}
	}
}
void draw_rect(int x0, int y0, int x1, int y1, int color)//khong thay doi do dai khi ham thay doi
//=>do do neu thay doi console qua nho so voi kich thuoc cua do vat thi console se bien mat hoac loi
{
	//cach fix:
	x0 = clamp(0, x0, render_state.width);
	x1 = clamp(0, x1, render_state.width);
	y0 = clamp(0, y0, render_state.height);
	y1 = clamp(0, y1, render_state.height);
	for (int y = y0; y < y1; y++)
	{
		unsigned int* pixel = (unsigned int*)render_state.memory + x0 + y*render_state.width;
		//dua con tro xuong tung dong
		for (int x = x0; x < x1; x++)
		{
			*pixel++ = color;
		}
	}
}
void draw_bat(int x, int y, int size)
{
	int a = x, b = y;
	//1
	draw_rect(a, b, a + 10, b + 5, 0x000000);
	draw_rect(a + 25, b, a + 35, b + 5, 0x000000);

	//2	
	draw_rect(x - 5, y - 5, x + 5, y, 0x000000);
	draw_rect(x + 30, y - 5, x + 40, y, 0x000000);

	//3
	draw_rect(x - 10, y - 10, x + 5, y - 5, 0x000000);
	draw_rect(x + 30, y - 10, x + 45, y - 5, 0x000000);

	//4
	draw_rect(x - 15, y - 15, x - 5, y - 10, 0x000000);
	draw_rect(x - 5, y - 15, x, y - 10, 0xff0000);
	draw_rect(x, y - 15, x + 5, y - 10, 0x000000);
	draw_rect(x + 10, y - 15, x + 15, y - 10, 0x000000);
	draw_rect(x + 20, y - 15, x + 25, y - 10, 0x000000);
	draw_rect(x + 30, y - 15, x + 35, y - 10, 0x000000);
	draw_rect(x + 35, y - 15, x + 40, y - 10, 0xff0000);
	draw_rect(x + 40, y - 15, x + 50, y - 10, 0x000000);

	//5
	draw_rect(x - 15, y - 20, x + 5, y - 15, 0x000000);
	draw_rect(x - 10, y - 20, x, y - 15, 0xff0000);
	draw_rect(x, y - 20, x + 20, y - 15, 0x000000);
	draw_rect(x + 10, y - 20, x + 15, y - 15, 0xffff00);
	draw_rect(x + 15, y - 20, x + 20, y - 15, 0x000000);
	draw_rect(x + 20, y - 20, x + 25, y - 15, 0xffff00);
	draw_rect(x + 25, y - 20, x + 35, y - 15, 0x000000);
	draw_rect(x + 35, y - 20, x + 45, y - 15, 0xff0000);
	draw_rect(x + 45, y - 20, x + 50, y - 15, 0x000000);

	//6
	draw_rect(x - 20, y - 25, x - 10, y - 20, 0x000000);
	draw_rect(x - 10, y - 25, x, y - 20, 0xff0000);
	draw_rect(x, y - 25, x + 35, y - 20, 0x000000);
	draw_rect(x + 35, y - 25, x + 45, y - 20, 0xff0000);
	draw_rect(x + 45, y - 25, x + 55, y - 20, 0x000000);

	//7
	draw_rect(x - 20, y - 30, x - 15, y - 25, 0x000000);
	draw_rect(x - 15, y - 30, x, y - 25, 0xff0000);
	draw_rect(x, y - 30, x + 5, y - 25, 0x000000);
	draw_rect(x + 5, y - 30, x + 10, y - 25, 0xff0000);
	draw_rect(x + 10, y - 30, x + 25, y - 25, 0x000000);
	draw_rect(x + 25, y - 30, x + 30, y - 25, 0xff0000);
	draw_rect(x + 30, y - 30, x + 35, y - 25, 0x000000);
	draw_rect(x + 35, y - 30, x + 50, y - 25, 0xff0000);
	draw_rect(x + 50, y - 30, x + 55, y - 25, 0x000000);

	//8
	draw_rect(x - 20, y - 35, x - 15, y - 30, 0x000000);
	draw_rect(x - 15, y - 35, x - 10, y - 30, 0xff0000);
	draw_rect(x - 5, y - 35, x, y - 30, 0xff0000);
	draw_rect(x, y - 35, x + 5, y - 30, 0x000000);
	draw_rect(x + 10, y - 35, x + 25, y - 30, 0x000000);
	draw_rect(x + 30, y - 35, x + 35, y - 30, 0x000000);
	draw_rect(x + 35, y - 35, x + 40, y - 30, 0xff0000);
	draw_rect(x + 45, y - 35, x + 50, y - 30, 0xff0000);
	draw_rect(x + 50, y - 35, x + 55, y - 30, 0x000000);

	//9
	draw_rect(x - 20, y - 40, x - 15, y - 35, 0x000000);
	draw_rect(x - 15, y - 40, x - 10, y - 35, 0xff0000);
	draw_rect(x, y - 40, x + 5, y - 35, 0x000000);
	draw_rect(x + 15, y - 40, x + 20, y - 35, 0x000000);
	draw_rect(x + 30, y - 40, x + 35, y - 35, 0x000000);
	draw_rect(x + 45, y - 40, x + 50, y - 35, 0xff0000);
	draw_rect(x + 50, y - 40, x + 55, y - 35, 0x000000);

	//10
	draw_rect(x - 20, y - 45, x - 15, y - 40, 0x000000);
	draw_rect(x + 50, y - 45, x + 55, y - 40, 0x000000);
}

void draw_dragon(int x, int y, int size) {
	int a = x;
	int b = y;

	//1 + 2
	a = x + 3 * 5;
	draw_rect(a, b, a + 3, b + 6, 0x000000);
	draw_rect(a + 16 * 3, b, a + 16 * 3 + 3, b + 6, 0x000000);

	//3
	a = x + 3 * 4;
	b = y - 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 9, b + 3, 0x000000);
	draw_rect(a + 18, b, a + 21, b + 3, 0x000000);
	draw_rect(a + 36, b, a + 39, b + 3, 0x000000);
	draw_rect(a + 48, b, a + 51, b + 3, 0x000000);
	draw_rect(a + 51, b, a + 54, b + 3, 0xcc3333);
	draw_rect(a + 54, b, a + 57, b + 3, 0x000000);

	//4
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 9, b + 3, 0x000000);
	draw_rect(a + 15, b, a + 18, b + 3, 0x000000);
	draw_rect(a + 18, b, a + 21, b + 3, 0xcc3333);
	draw_rect(a + 21, b, a + 24, b + 3, 0x000000);
	draw_rect(a + 33, b, a + 36, b + 3, 0x000000);
	draw_rect(a + 36, b, a + 39, b + 3, 0xcc3333);
	draw_rect(a + 39, b, a + 42, b + 3, 0x000000);
	draw_rect(a + 48, b, a + 51, b + 3, 0x000000);
	draw_rect(a + 51, b, a + 54, b + 3, 0xcc3333);
	draw_rect(a + 54, b, a + 57, b + 3, 0x000000);

	//5
	a = x + 3 * 3;
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 9, b + 3, 0xcc3333);
	draw_rect(a + 9, b, a + 12, b + 3, 0x000000);
	draw_rect(a + 18, b, a + 21, b + 3, 0x000000);
	draw_rect(a + 21, b, a + 24, b + 3, 0xcc3333);
	draw_rect(a + 24, b, a + 27, b + 3, 0x000000);
	draw_rect(a + 36, b, a + 39, b + 3, 0x000000);
	draw_rect(a + 39, b, a + 42, b + 3, 0xcc3333);
	draw_rect(a + 42, b, a + 45, b + 3, 0x000000);
	draw_rect(a + 51, b, a + 54, b + 3, 0x000000);
	draw_rect(a + 54, b, a + 60, b + 3, 0xcc3333);
	draw_rect(a + 60, b, a + 63, b + 3, 0x000000);

	//6
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 12, b + 3, 0xcc3333);
	draw_rect(a + 12, b, a + 15, b + 3, 0x000000);
	draw_rect(a + 18, b, a + 21, b + 3, 0x000000);
	draw_rect(a + 21, b, a + 24, b + 3, 0xcc3333);
	draw_rect(a + 24, b, a + 27, b + 3, 0x000000);
	draw_rect(a + 36, b, a + 39, b + 3, 0x000000);
	draw_rect(a + 39, b, a + 42, b + 3, 0xcc3333);
	draw_rect(a + 42, b, a + 45, b + 3, 0x000000);
	draw_rect(a + 48, b, a + 51, b + 3, 0x000000);
	draw_rect(a + 51, b, a + 60, b + 3, 0xcc3333);
	draw_rect(a + 60, b, a + 63, b + 3, 0x000000);

	//7
	a = x + 3 * 2;
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 12, b + 3, 0xcc3333);
	draw_rect(a + 9, b, a + 12, b + 3, 0x0099ff);
	draw_rect(a + 12, b, a + 15, b + 3, 0xcc3333);
	draw_rect(a + 15, b, a + 18, b + 3, 0x000000);
	draw_rect(a + 21, b, a + 24, b + 3, 0x000000);
	draw_rect(a + 24, b, a + 30, b + 3, 0xcc3333);
	draw_rect(a + 30, b, a + 39, b + 3, 0x000000);
	draw_rect(a + 39, b, a + 45, b + 3, 0xcc3333);
	draw_rect(a + 45, b, a + 48, b + 3, 0x000000);
	draw_rect(a + 51, b, a + 54, b + 3, 0x000000);
	draw_rect(a + 54, b, a + 57, b + 3, 0xcc3333);
	draw_rect(a + 57, b, a + 60, b + 3, 0x0099ff);
	draw_rect(a + 60, b, a + 66, b + 3, 0xcc3333);
	draw_rect(a + 66, b, a + 69, b + 3, 0x000000);

	//8
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 12, b + 3, 0x0099ff);
	draw_rect(a + 12, b, a + 15, b + 3, 0xcc3333);
	draw_rect(a + 15, b, a + 18, b + 3, 0x000000);
	draw_rect(a + 21, b, a + 24, b + 3, 0x000000);
	draw_rect(a + 24, b, a + 45, b + 3, 0xcc3333);
	draw_rect(a + 45, b, a + 48, b + 3, 0x000000);
	draw_rect(a + 51, b, a + 54, b + 3, 0x000000);
	draw_rect(a + 54, b, a + 57, b + 3, 0xcc3333);
	draw_rect(a + 57, b, a + 63, b + 3, 0x0099ff);
	draw_rect(a + 63, b, a + 66, b + 3, 0xcc3333);
	draw_rect(a + 66, b, a + 69, b + 3, 0x000000);

	//9
	a = x + 3;
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 18, b + 3, 0x0099ff);
	draw_rect(a + 18, b, a + 21, b + 3, 0xcc3333);
	draw_rect(a + 21, b, a + 24, b + 3, 0x000000);
	draw_rect(a + 24, b, a + 51, b + 3, 0xcc3333);
	draw_rect(a + 51, b, a + 54, b + 3, 0x000000);
	draw_rect(a + 54, b, a + 57, b + 3, 0xcc3333);
	draw_rect(a + 57, b, a + 66, b + 3, 0x0099ff);
	draw_rect(a + 66, b, a + 72, b + 3, 0xcc3333);
	draw_rect(a + 72, b, a + 75, b + 3, 0x000000);

	//10
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 21, b + 3, 0x0099ff);
	draw_rect(a + 21, b, a + 24, b + 3, 0x000000);
	draw_rect(a + 24, b, a + 27, b + 3, 0xcc3333);
	draw_rect(a + 27, b, a + 30, b + 3, 0xffffff);
	draw_rect(a + 30, b, a + 45, b + 3, 0xcc3333);
	draw_rect(a + 45, b, a + 48, b + 3, 0xffffff);
	draw_rect(a + 48, b, a + 51, b + 3, 0xcc3333);
	draw_rect(a + 51, b, a + 54, b + 3, 0x000000);
	draw_rect(a + 54, b, a + 69, b + 3, 0x0099ff);
	draw_rect(a + 69, b, a + 72, b + 3, 0xcc3333);
	draw_rect(a + 72, b, a + 75, b + 3, 0x000000);

	//11
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 21, b + 3, 0x0099ff);
	draw_rect(a + 21, b, a + 24, b + 3, 0x000000);
	draw_rect(a + 24, b, a + 27, b + 3, 0xcc3333);
	draw_rect(a + 27, b, a + 30, b + 3, 0xffffff);
	draw_rect(a + 30, b, a + 33, b + 3, 0x000000);
	draw_rect(a + 33, b, a + 42, b + 3, 0xcc3333);
	draw_rect(a + 42, b, a + 45, b + 3, 0x000000);
	draw_rect(a + 45, b, a + 48, b + 3, 0xffffff);
	draw_rect(a + 48, b, a + 51, b + 3, 0xcc3333);
	draw_rect(a + 51, b, a + 54, b + 3, 0x000000);
	draw_rect(a + 54, b, a + 69, b + 3, 0x0099ff);
	draw_rect(a + 69, b, a + 72, b + 3, 0xcc3333);
	draw_rect(a + 72, b, a + 75, b + 3, 0x000000);

	//12
	a = x;
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 27, b + 3, 0x0099ff);
	draw_rect(a + 27, b, a + 30, b + 3, 0x000000);
	draw_rect(a + 30, b, a + 51, b + 3, 0xcc3333);
	draw_rect(a + 51, b, a + 54, b + 3, 0x000000);
	draw_rect(a + 54, b, a + 75, b + 3, 0x0099ff);
	draw_rect(a + 75, b, a + 78, b + 3, 0xcc3333);
	draw_rect(a + 78, b, a + 81, b + 3, 0x000000);

	//13
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 15, b + 3, 0x0099ff);
	draw_rect(a + 15, b, a + 18, b + 3, 0x000000);
	draw_rect(a + 18, b, a + 30, b + 3, 0x0099ff);
	draw_rect(a + 30, b, a + 33, b + 3, 0x000000);
	draw_rect(a + 33, b, a + 48, b + 3, 0xcc3333);
	draw_rect(a + 48, b, a + 51, b + 3, 0x000000);
	draw_rect(a + 51, b, a + 63, b + 3, 0x0099ff);
	draw_rect(a + 63, b, a + 66, b + 3, 0x000000);
	draw_rect(a + 66, b, a + 75, b + 3, 0x0099ff);
	draw_rect(a + 75, b, a + 78, b + 3, 0xcc3333);
	draw_rect(a + 78, b, a + 81, b + 3, 0x000000);

	//14
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 12, b + 3, 0x0099ff);
	draw_rect(a + 12, b, a + 15, b + 3, 0x000000);
	draw_rect(a + 15, b, a + 18, b + 3, 0xffffff);
	draw_rect(a + 18, b, a + 24, b + 3, 0x000000);
	draw_rect(a + 24, b, a + 30, b + 3, 0x0099ff);
	draw_rect(a + 30, b, a + 33, b + 3, 0x000000);
	draw_rect(a + 33, b, a + 48, b + 3, 0xcc3333);
	draw_rect(a + 48, b, a + 51, b + 3, 0x000000);
	draw_rect(a + 51, b, a + 57, b + 3, 0x0099ff);
	draw_rect(a + 57, b, a + 63, b + 3, 0x000000);
	draw_rect(a + 63, b, a + 66, b + 3, 0xffffff);
	draw_rect(a + 66, b, a + 69, b + 3, 0x000000);
	draw_rect(a + 69, b, a + 75, b + 3, 0x0099ff);
	draw_rect(a + 75, b, a + 78, b + 3, 0xcc3333);
	draw_rect(a + 78, b, a + 81, b + 3, 0x000000);

	//15
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 12, b + 3, 0x0099ff);
	draw_rect(a + 12, b, a + 15, b + 3, 0x000000);
	draw_rect(a + 15, b, a + 18, b + 3, 0xcc3333);
	draw_rect(a + 18, b, a + 21, b + 3, 0x000000);
	draw_rect(a + 21, b, a + 24, b + 3, 0xffffff);
	draw_rect(a + 24, b, a + 33, b + 3, 0x000000);
	draw_rect(a + 33, b, a + 36, b + 3, 0xffffff);
	draw_rect(a + 36, b, a + 45, b + 3, 0xcc3333);
	draw_rect(a + 45, b, a + 48, b + 3, 0xffffff);
	draw_rect(a + 48, b, a + 57, b + 3, 0x000000);
	draw_rect(a + 57, b, a + 60, b + 3, 0xffffff);
	draw_rect(a + 60, b, a + 63, b + 3, 0x000000);
	draw_rect(a + 63, b, a + 66, b + 3, 0xcc3333);
	draw_rect(a + 66, b, a + 69, b + 3, 0x000000);
	draw_rect(a + 69, b, a + 75, b + 3, 0x0099ff);
	draw_rect(a + 75, b, a + 78, b + 3, 0xcc3333);
	draw_rect(a + 78, b, a + 81, b + 3, 0x000000);

	//16
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 9, b + 3, 0x0099ff);
	draw_rect(a + 9, b, a + 12, b + 3, 0x000000);
	draw_rect(a + 12, b, a + 15, b + 3, 0xffffff);
	draw_rect(a + 15, b, a + 24, b + 3, 0xcc3333);
	draw_rect(a + 24, b, a + 27, b + 3, 0x000000);
	draw_rect(a + 27, b, a + 33, b + 3, 0xcc3333);
	draw_rect(a + 33, b, a + 36, b + 3, 0x000000);
	draw_rect(a + 36, b, a + 45, b + 3, 0xcc3333);
	draw_rect(a + 45, b, a + 48, b + 3, 0x000000);
	draw_rect(a + 48, b, a + 54, b + 3, 0xcc3333);
	draw_rect(a + 54, b, a + 57, b + 3, 0x000000);
	draw_rect(a + 57, b, a + 66, b + 3, 0xcc3333);
	draw_rect(a + 66, b, a + 69, b + 3, 0xffffff);
	draw_rect(a + 69, b, a + 72, b + 3, 0x000000);
	draw_rect(a + 72, b, a + 75, b + 3, 0x0099ff);
	draw_rect(a + 75, b, a + 78, b + 3, 0xcc3333);
	draw_rect(a + 78, b, a + 81, b + 3, 0x000000);

	//17
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 9, b + 3, 0x0099ff);
	draw_rect(a + 9, b, a + 12, b + 3, 0x000000);
	draw_rect(a + 12, b, a + 24, b + 3, 0xcc3333);
	draw_rect(a + 24, b, a + 27, b + 3, 0x000000);
	draw_rect(a + 27, b, a + 36, b + 3, 0xcc3333);
	draw_rect(a + 36, b, a + 45, b + 3, 0x000000);
	draw_rect(a + 45, b, a + 54, b + 3, 0xcc3333);
	draw_rect(a + 54, b, a + 57, b + 3, 0x000000);
	draw_rect(a + 57, b, a + 69, b + 3, 0xcc3333);
	draw_rect(a + 69, b, a + 72, b + 3, 0x000000);
	draw_rect(a + 72, b, a + 75, b + 3, 0x0099ff);
	draw_rect(a + 75, b, a + 78, b + 3, 0xcc3333);
	draw_rect(a + 78, b, a + 81, b + 3, 0x000000);

	//18
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 12, b + 3, 0x0099ff);
	draw_rect(a + 12, b, a + 15, b + 3, 0x000000);
	draw_rect(a + 15, b, a + 21, b + 3, 0xcc3333);
	draw_rect(a + 21, b, a + 24, b + 3, 0x000000);
	draw_rect(a + 24, b, a + 57, b + 3, 0xcc3333);
	draw_rect(a + 57, b, a + 60, b + 3, 0x000000);
	draw_rect(a + 60, b, a + 66, b + 3, 0xcc3333);
	draw_rect(a + 66, b, a + 69, b + 3, 0x000000);
	draw_rect(a + 69, b, a + 75, b + 3, 0x0099ff);
	draw_rect(a + 75, b, a + 78, b + 3, 0xcc3333);
	draw_rect(a + 78, b, a + 81, b + 3, 0x000000);

	//19
	a = x + 3;
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 12, b + 3, 0x0099ff);
	draw_rect(a + 12, b, a + 18, b + 3, 0x000000);
	draw_rect(a + 18, b, a + 24, b + 3, 0xcc3333);
	draw_rect(a + 24, b, a + 27, b + 3, 0x000000);
	draw_rect(a + 27, b, a + 48, b + 3, 0xcc3333);
	draw_rect(a + 48, b, a + 51, b + 3, 0x000000);
	draw_rect(a + 51, b, a + 57, b + 3, 0xcc3333);
	draw_rect(a + 57, b, a + 63, b + 3, 0x000000);
	draw_rect(a + 63, b, a + 69, b + 3, 0x0099ff);
	draw_rect(a + 69, b, a + 72, b + 3, 0xcc3333);
	draw_rect(a + 72, b, a + 75, b + 3, 0x000000);

	//20
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xcc3333);
	draw_rect(a + 6, b, a + 12, b + 3, 0x000000);
	draw_rect(a + 15, b, a + 24, b + 3, 0x000000);
	draw_rect(a + 24, b, a + 30, b + 3, 0xcc3333);
	draw_rect(a + 30, b, a + 45, b + 3, 0xffff66);
	draw_rect(a + 45, b, a + 51, b + 3, 0xcc3333);
	draw_rect(a + 51, b, a + 60, b + 3, 0x000000);
	draw_rect(a + 63, b, a + 69, b + 3, 0x000000);
	draw_rect(a + 69, b, a + 72, b + 3, 0xcc3333);
	draw_rect(a + 72, b, a + 75, b + 3, 0x000000);

	//21
	a = x + 3 * 3;
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 9, b, a + 12, b + 3, 0x000000);
	draw_rect(a + 12, b, a + 15, b + 3, 0xcc3333);
	draw_rect(a + 15, b, a + 18, b + 3, 0x000000);
	draw_rect(a + 18, b, a + 21, b + 3, 0xcc3333);
	draw_rect(a + 21, b, a + 42, b + 3, 0xffff66);
	draw_rect(a + 42, b, a + 45, b + 3, 0xcc3333);
	draw_rect(a + 45, b, a + 48, b + 3, 0x000000);
	draw_rect(a + 48, b, a + 51, b + 3, 0xcc3333);
	draw_rect(a + 51, b, a + 54, b + 3, 0x000000);
	draw_rect(a + 60, b, a + 63, b + 3, 0x000000);

	//22
	a = x + 3 * 5;
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 9, b + 3, 0xcc3333);
	draw_rect(a + 9, b, a + 12, b + 3, 0x000000);
	draw_rect(a + 12, b, a + 15, b + 3, 0xcc3333);
	draw_rect(a + 15, b, a + 36, b + 3, 0xffff66);
	draw_rect(a + 36, b, a + 39, b + 3, 0xcc3333);
	draw_rect(a + 39, b, a + 42, b + 3, 0x000000);
	draw_rect(a + 42, b, a + 48, b + 3, 0xcc3333);
	draw_rect(a + 48, b, a + 51, b + 3, 0x000000);

	//23
	a = x + 3 * 5;
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 12, b + 3, 0xcc3333);
	draw_rect(a + 12, b, a + 15, b + 3, 0x000000);
	draw_rect(a + 15, b, a + 36, b + 3, 0xffff66);
	draw_rect(a + 36, b, a + 39, b + 3, 0x000000);
	draw_rect(a + 39, b, a + 48, b + 3, 0xcc3333);
	draw_rect(a + 48, b, a + 51, b + 3, 0x000000);

	//24
	a = x + 3 * 5;
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 15, b + 3, 0xcc3333);
	draw_rect(a + 15, b, a + 18, b + 3, 0x000000);
	draw_rect(a + 18, b, a + 33, b + 3, 0xffff66);
	draw_rect(a + 33, b, a + 36, b + 3, 0x000000);
	draw_rect(a + 36, b, a + 48, b + 3, 0xcc3333);
	draw_rect(a + 48, b, a + 51, b + 3, 0x000000);

	//25
	a = x + 3 * 4;
	b -= 3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 18, b + 3, 0xcc3333);
	draw_rect(a + 18, b, a + 39, b + 3, 0x000000);
	draw_rect(a + 39, b, a + 54, b + 3, 0xcc3333);
	draw_rect(a + 54, b, a + 57, b + 3, 0x000000);

	//26
	b = -3;
	draw_rect(a, b, a + 3, b + 3, 0x000000);
	draw_rect(a + 3, b, a + 6, b + 3, 0xffffff);
	draw_rect(a + 6, b, a + 9, b + 3, 0xcc3333);
	draw_rect(a + 9, b, a + 12, b + 3, 0xffffff);
	draw_rect(a + 12, b, a + 15, b + 3, 0xcc3333);
	draw_rect(a + 15, b, a + 18, b + 3, 0x000000);
	draw_rect(a + 18, b, a + 42, b + 3, 0x000000);
	draw_rect(a + 42, b, a + 45, b + 3, 0xcc3333);
	draw_rect(a + 45, b, a + 48, b + 3, 0xffffff);
	draw_rect(a + 48, b, a + 51, b + 3, 0xcc3333);
	draw_rect(a + 51, b, a + 54, b + 3, 0xffffff);
	draw_rect(a + 54, b, a + 57, b + 3, 0x000000);

	//27
	a = x + 3 * 5;
	b -= 3;
	draw_rect(a, b, a + 12, b + 3, 0x000000);
	draw_rect(a + 18, b, a + 39, b + 3, 0x000000);
	draw_rect(a + 69, b, a + 81, b + 3, 0x000000);
}

void draw_penguin(int x, int y, int size) {
	int a, b = y;
	//1 
	a = x + size * 3;
	draw_rect(a, b, a + 8 * size, b + size, 0x000000);

	//2
	a = x + size * 2;
	b -= size;
	draw_rect(a, b, a + 10 * size, b + size, 0x000000);

	//3
	a = x + size;
	b -= size;
	draw_rect(a, b, a + 12 * size, b + size, 0x000000);

	//4 
	a = x;
	b -= size;
	draw_rect(a, b, a + 7 * size, b + size, 0x000000);
	draw_rect(a + 7 * size, b, a + 12 * size, b + size, 0xffffff);
	draw_rect(a + 12 * size, b, a + 14 * size, b + size, 0x000000);

	//5
	b -= size;
	draw_rect(a, b, a + 6 * size, b + size, 0x000000);
	draw_rect(a + 6 * size, b, a + 13 * size, b + size, 0xffffff);
	draw_rect(a + 13 * size, b, a + 14 * size, b + size, 0x000000);

	//6
	b -= size;
	draw_rect(a, b, a + 6 * size, b + size, 0x000000);
	draw_rect(a + 6 * size, b, a + 14 * size, b + size, 0xffffff);
	draw_rect(a + 14 * size, b, a + 15 * size, b + size, 0x000000);

	//7
	b -= size;
	draw_rect(a, b, a + 6 * size, b + size, 0x000000);
	draw_rect(a + 6 * size, b, a + 7 * size, b + size, 0xffffff);
	draw_rect(a + 7 * size, b, a + 9 * size, b + size, 0x000000);
	draw_rect(a + 9 * size, b, a + 13 * size, b + size, 0xffffff);
	draw_rect(a + 13 * size, b, a + 15 * size, b + size, 0x000000);

	//8
	b -= size;
	draw_rect(a, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 5 * size, b, a + 6 * size, b + size, 0xffffff);
	draw_rect(a + 6 * size, b, a + 8 * size, b + size, 0x000000);
	draw_rect(a + 8 * size, b, a + 9 * size, b + size, 0xffffff);
	draw_rect(a + 9 * size, b, a + 10 * size, b + size, 0x000000);
	draw_rect(a + 10 * size, b, a + 12 * size, b + size, 0xffffff);
	draw_rect(a + 12 * size, b, a + 14 * size, b + size, 0x000000);
	draw_rect(a + 14 * size, b, a + 15 * size, b + size, 0xffffff);
	draw_rect(a + 15 * size, b, a + 16 * size, b + size, 0x000000);

	//9
	b -= size;
	draw_rect(a, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 5 * size, b, a + 6 * size, b + size, 0xffffff);
	draw_rect(a + 6 * size, b, a + 10 * size, b + size, 0x000000);
	draw_rect(a + 10 * size, b, a + 12 * size, b + size, 0xffffff);
	draw_rect(a + 12 * size, b, a + 16 * size, b + size, 0x000000);

	//10
	b -= size;
	draw_rect(a, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 5 * size, b, a + 7 * size, b + size, 0xffffff);
	draw_rect(a + 7 * size, b, a + 9 * size, b + size, 0x000000);
	draw_rect(a + 9 * size, b, a + 11 * size, b + size, 0xffffff);
	draw_rect(a + 11 * size, b, a + 13 * size, b + size, 0xffff00);
	draw_rect(a + 13 * size, b, a + 15 * size, b + size, 0x000000);

	//11
	b -= size;
	draw_rect(a, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 5 * size, b, a + 10 * size, b + size, 0xffffff);
	draw_rect(a + 10 * size, b, a + 15 * size, b + size, 0xffff00);

	//12
	b -= size;
	draw_rect(a, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 5 * size, b, a + 11 * size, b + size, 0xffffff);
	draw_rect(a + 11 * size, b, a + 17 * size, b + size, 0xffff00);

	//13
	b -= size;
	draw_rect(a, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 5 * size, b, a + 14 * size, b + size, 0xffffff);

	//14
	b -= size;
	draw_rect(a, b, a + 6 * size, b + size, 0x000000);
	draw_rect(a + 6 * size, b, a + 14 * size, b + size, 0xffffff);
	draw_rect(a + 14 * size, b, a + 15 * size, b + size, 0x000000);

	//15
	b -= size;
	draw_rect(a, b, a + 7 * size, b + size, 0x000000);
	draw_rect(a + 7 * size, b, a + 14 * size, b + size, 0xffffff);
	draw_rect(a + 14 * size, b, a + 16 * size, b + size, 0x000000);

	//16
	b -= size;
	draw_rect(a, b, a + 8 * size, b + size, 0x000000);
	draw_rect(a + 8 * size, b, a + 14 * size, b + size, 0xffffff);
	draw_rect(a + 14 * size, b, a + 17 * size, b + size, 0x000000);

	//17
	b -= size;
	draw_rect(a, b, a + 9 * size, b + size, 0x000000);
	draw_rect(a + 9 * size, b, a + 14 * size, b + size, 0xffffff);
	draw_rect(a + 14 * size, b, a + 18 * size, b + size, 0x000000);

	//18
	b -= size;
	draw_rect(a, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 5 * size, b, a + 6 * size, b + size, 0xffffff);
	draw_rect(a + 6 * size, b, a + 9 * size, b + size, 0x000000);
	draw_rect(a + 9 * size, b, a + 14 * size, b + size, 0xffffff);
	draw_rect(a + 14 * size, b, a + 18 * size, b + size, 0x000000);

	//19, 20
	b -= size;
	draw_rect(a, b, a + 5 * size, b + 2 * size, 0x000000);
	draw_rect(a + 5 * size, b, a + 14 * size, b + 2 * size, 0xffffff);
	draw_rect(a + 14 * size, b, a + 15 * size, b + 2 * size, 0x000000);

	//21, 22
	b -= 2 * size;
	draw_rect(a, b, a + 4 * size, b + 2 * size, 0x000000);
	draw_rect(a + 4 * size, b, a + 14 * size, b + 2 * size, 0xffffff);
	draw_rect(a + 14 * size, b, a + 15 * size, b + 2 * size, 0x000000);

	//23
	b -= size;
	draw_rect(a, b, a + 2 * size, b + size, 0x000000);
	draw_rect(a + 2 * size, b, a + 13 * size, b + size, 0xffffff);
	draw_rect(a + 13 * size, b, a + 14 * size, b + size, 0x000000);

	//24
	b -= size;
	a = x + size;
	draw_rect(a, b, a + 12 * size, b + size, 0x000000);

	//25
	a = x + 3 * size;
	b -= size;
	draw_rect(a, b, a + size, b + size, 0xcccc33);
	draw_rect(a + 8 * size, b, a + 9 * size, b + size, 0xcccc33);

	//26
	a = x + 2 * size;
	b -= size;
	draw_rect(a, b, a + 4 * size, b + size, 0xcccc33);
	draw_rect(a + 8 * size, b, a + 12 * size, b + size, 0xcccc33);
}

void draw_car(int x, int y, int size) {
	int a, b = y;
	//1 
	a = x + size * 19;
	draw_rect(a, b, a + 9 * size, b + size, 0x000000);

	//2
	a = x + size * 18;
	b -= size;
	draw_rect(a, b, a + size, b + size, 0x000000);
	draw_rect(a + size, b, a + 10 * size, b + size, 0xc0c0c0);
	draw_rect(a + 10 * size, b, a + 13 * size, b + size, 0x000000);

	//3
	a = x + size * 17;
	b -= size;
	draw_rect(a, b, a + 11 * size, b + size, 0x000000);
	draw_rect(a + 11 * size, b, a + 14 * size, b + size, 0xc0c0c0);
	draw_rect(a + 14 * size, b, a + 16 * size, b + size, 0x000000);

	//4
	a = x + size * 16;
	b -= size;
	draw_rect(a, b, a + size, b + size, 0x000000);
	draw_rect(a + size, b, a + 12 * size, b + size, 0x33cc00);
	draw_rect(a + 12 * size, b, a + 15 * size, b + size, 0x000000);
	draw_rect(a + 15 * size, b, a + 17 * size, b + size, 0x999999);
	draw_rect(a + 17 * size, b, a + 19 * size, b + size, 0x000000);

	//5
	a = x + 11 * size;
	b -= size;
	draw_rect(a, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 5 * size, b, a + 6 * size, b + size, 0x33cc00);
	draw_rect(a + 6 * size, b, a + 15 * size, b + size, 0x99ff99);
	draw_rect(a + 15 * size, b, a + 20 * size, b + size, 0x33cc00);
	draw_rect(a + 20 * size, b, a + 22 * size, b + size, 0x000000);
	draw_rect(a + 22 * size, b, a + 24 * size, b + size, 0x999999);
	draw_rect(a + 24 * size, b, a + 26 * size, b + size, 0x000000);

	//6
	a = x + 6 * size;
	b -= size;
	draw_rect(a, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 5 * size, b, a + 9 * size, b + size, 0xc0c0c0);
	draw_rect(a + 9 * size, b, a + 34 * size, b + size, 0x000000);

	//7 
	a = x + 3 * size;
	b -= size;
	draw_rect(a, b, a + 3 * size, b + size, 0x000000);
	draw_rect(a + 3 * size, b, a + 13 * size, b + size, 0xc0c0c0);
	draw_rect(a + 13 * size, b, a + 14 * size, b + size, 0x000000);
	draw_rect(a + 14 * size, b, a + 24 * size, b + size, 0xc0c0c0);
	draw_rect(a + 24 * size, b, a + 25 * size, b + size, 0x000000);
	draw_rect(a + 25 * size, b, a + 37 * size, b + size, 0xc0c0c0);
	draw_rect(a + 37 * size, b, a + 41 * size, b + size, 0x000000);

	//8
	a = x + size;
	b -= size;
	draw_rect(a, b, a + 2 * size, b + size, 0x000000);
	draw_rect(a + 2 * size, b, a + 5 * size, b + size, 0xc0c0c0);
	draw_rect(a + 5 * size, b, a + 12 * size, b + size, 0x999999);
	draw_rect(a + 12 * size, b, a + 14 * size, b + size, 0x000000);
	draw_rect(a + 14 * size, b, a + 15 * size, b + size, 0x999999);
	draw_rect(a + 15 * size, b, a + 16 * size, b + size, 0x000000);
	draw_rect(a + 16 * size, b, a + 23 * size, b + size, 0x999999);
	draw_rect(a + 23 * size, b, a + 25 * size, b + size, 0x000000);
	draw_rect(a + 25 * size, b, a + 26 * size, b + size, 0x999999);
	draw_rect(a + 26 * size, b, a + 27 * size, b + size, 0x000000);
	draw_rect(a + 27 * size, b, a + 40 * size, b + size, 0x999999);
	draw_rect(a + 40 * size, b, a + 41 * size, b + size, 0x000000);
	draw_rect(a + 41 * size, b, a + 42 * size, b + size, 0x999999);
	draw_rect(a + 42 * size, b, a + 43 * size, b + size, 0x000000);

	//9
	a = x;
	b -= size;
	draw_rect(a, b, a + size, b + size, 0x000000);
	draw_rect(a + size, b, a + 2 * size, b + size, 0x999999);
	draw_rect(a + 2 * size, b, a + 3 * size, b + size, 0x000000);
	draw_rect(a + 3 * size, b, a + 7 * size, b + size, 0xc0c0c0);
	draw_rect(a + 7 * size, b, a + 10 * size, b + size, 0x000000);
	draw_rect(a + 10 * size, b, a + 16 * size, b + size, 0xc0c0c0);
	draw_rect(a + 16 * size, b, a + 17 * size, b + size, 0x000000);
	draw_rect(a + 17 * size, b, a + 27 * size, b + size, 0xc0c0c0);
	draw_rect(a + 27 * size, b, a + 28 * size, b + size, 0x000000);
	draw_rect(a + 28 * size, b, a + 31 * size, b + size, 0xc0c0c0);
	draw_rect(a + 31 * size, b, a + 34 * size, b + size, 0x000000);
	draw_rect(a + 34 * size, b, a + 42 * size, b + size, 0xc0c0c0);
	draw_rect(a + 42 * size, b, a + 44 * size, b + size, 0x000000);

	//10
	a = x + size;
	b -= size;
	draw_rect(a, b, a + size, b + size, 0x000000);
	draw_rect(a + size, b, a + 3 * size, b + size, 0x999999);
	draw_rect(a + 3 * size, b, a + 5 * size, b + size, 0xc0c0c0);
	draw_rect(a + 5 * size, b, a + 6 * size, b + size, 0x000000);
	draw_rect(a + 6 * size, b, a + 9 * size, b + size, 0x993399);
	draw_rect(a + 9 * size, b, a + 10 * size, b + size, 0x000000);
	draw_rect(a + 10 * size, b, a + 15 * size, b + size, 0xc0c0c0);
	draw_rect(a + 15 * size, b, a + 16 * size, b + size, 0x000000);
	draw_rect(a + 16 * size, b, a + 26 * size, b + size, 0xc0c0c0);
	draw_rect(a + 26 * size, b, a + 27 * size, b + size, 0x000000);
	draw_rect(a + 27 * size, b, a + 29 * size, b + size, 0xc0c0c0);
	draw_rect(a + 29 * size, b, a + 30 * size, b + size, 0x000000);
	draw_rect(a + 30 * size, b, a + 33 * size, b + size, 0x993399);
	draw_rect(a + 33 * size, b, a + 34 * size, b + size, 0x000000);
	draw_rect(a + 34 * size, b, a + 36 * size, b + size, 0xc0c0c0);
	draw_rect(a + 36 * size, b, a + 41 * size, b + size, 0x999999);
	draw_rect(a + 41 * size, b, a + 42 * size, b + size, 0x000000);

	//11
	a = x;
	b -= size;
	draw_rect(a, b, a + 3 * size, b + size, 0x000000);
	draw_rect(a + 3 * size, b, a + 5 * size, b + size, 0x999999);
	draw_rect(a + 5 * size, b, a + 6 * size, b + size, 0x000000);
	draw_rect(a + 6 * size, b, a + 7 * size, b + size, 0x993399);
	draw_rect(a + 7 * size, b, a + 10 * size, b + size, 0x000000);
	draw_rect(a + 10 * size, b, a + 11 * size, b + size, 0x993399);
	draw_rect(a + 11 * size, b, a + 12 * size, b + size, 0x000000);
	draw_rect(a + 12 * size, b, a + 16 * size, b + size, 0x999999);
	draw_rect(a + 16 * size, b, a + 17 * size, b + size, 0x000000);
	draw_rect(a + 17 * size, b, a + 27 * size, b + size, 0x999999);
	draw_rect(a + 27 * size, b, a + 28 * size, b + size, 0x000000);
	draw_rect(a + 28 * size, b, a + 29 * size, b + size, 0x999999);
	draw_rect(a + 29 * size, b, a + 30 * size, b + size, 0x000000);
	draw_rect(a + 30 * size, b, a + 31 * size, b + size, 0x993399);
	draw_rect(a + 31 * size, b, a + 34 * size, b + size, 0x000000);
	draw_rect(a + 34 * size, b, a + 35 * size, b + size, 0x993399);
	draw_rect(a + 35 * size, b, a + 36 * size, b + size, 0x000000);
	draw_rect(a + 36 * size, b, a + 38 * size, b + size, 0x999999);
	draw_rect(a + 38 * size, b, a + 44 * size, b + size, 0x000000);

	//12
	b -= size;
	draw_rect(a, b, a + size, b + size, 0x000000);
	draw_rect(a + size, b, a + 2 * size, b + size, 0xc0c0c0);
	draw_rect(a + 2 * size, b, a + 3 * size, b + size, 0x999999);
	draw_rect(a + 3 * size, b, a + 4 * size, b + size, 0x000000);
	draw_rect(a + 4 * size, b, a + 5 * size, b + size, 0x999999);
	draw_rect(a + 5 * size, b, a + 6 * size, b + size, 0x000000);
	draw_rect(a + 6 * size, b, a + 7 * size, b + size, 0x993399);
	draw_rect(a + 7 * size, b, a + 8 * size, b + size, 0x000000);
	draw_rect(a + 8 * size, b, a + 9 * size, b + size, 0x999999);
	draw_rect(a + 9 * size, b, a + 10 * size, b + size, 0x000000);
	draw_rect(a + 10 * size, b, a + 11 * size, b + size, 0x660066);
	draw_rect(a + 11 * size, b, a + 12 * size, b + size, 0x000000);
	draw_rect(a + 12 * size, b, a + 16 * size, b + size, 0x999999);
	draw_rect(a + 16 * size, b, a + 17 * size, b + size, 0x000000);
	draw_rect(a + 17 * size, b, a + 27 * size, b + size, 0x999999);
	draw_rect(a + 27 * size, b, a + 28 * size, b + size, 0x000000);
	draw_rect(a + 28 * size, b, a + 29 * size, b + size, 0x999999);
	draw_rect(a + 29 * size, b, a + 30 * size, b + size, 0x000000);
	draw_rect(a + 30 * size, b, a + 31 * size, b + size, 0x993399);
	draw_rect(a + 31 * size, b, a + 32 * size, b + size, 0x000000);
	draw_rect(a + 32 * size, b, a + 33 * size, b + size, 0x999999);
	draw_rect(a + 33 * size, b, a + 34 * size, b + size, 0x000000);
	draw_rect(a + 34 * size, b, a + 35 * size, b + size, 0x660066);
	draw_rect(a + 35 * size, b, a + 36 * size, b + size, 0x000000);
	draw_rect(a + 36 * size, b, a + 37 * size, b + size, 0x999999);
	draw_rect(a + 37 * size, b, a + 38 * size, b + size, 0x000000);
	draw_rect(a + 38 * size, b, a + 40 * size, b + size, 0x999999);
	draw_rect(a + 40 * size, b, a + 42 * size, b + size, 0xc0c0c0);
	draw_rect(a + 42 * size, b, a + 43 * size, b + size, 0x999999);
	draw_rect(a + 43 * size, b, a + 44 * size, b + size, 0x000000);

	//13
	a = x + size;
	b -= size;
	draw_rect(a, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 5 * size, b, a + 6 * size, b + size, 0x660066);
	draw_rect(a + 6 * size, b, a + 9 * size, b + size, 0x000000);
	draw_rect(a + 9 * size, b, a + 10 * size, b + size, 0x660066);
	draw_rect(a + 10 * size, b, a + 29 * size, b + size, 0x000000);
	draw_rect(a + 29 * size, b, a + 30 * size, b + size, 0x660066);
	draw_rect(a + 30 * size, b, a + 33 * size, b + size, 0x000000);
	draw_rect(a + 33 * size, b, a + 34 * size, b + size, 0x660066);
	draw_rect(a + 34 * size, b, a + 42 * size, b + size, 0x000000);

	//14
	a = x + 6 * size;
	b -= size;
	draw_rect(a, b, a + size, b + size, 0x000000);
	draw_rect(a + size, b, a + 4 * size, b + size, 0x660066);
	draw_rect(a + 4 * size, b, a + 5 * size, b + size, 0x000000);
	draw_rect(a + 24 * size, b, a + 25 * size, b + size, 0x000000);
	draw_rect(a + 25 * size, b, a + 28 * size, b + size, 0x660066);
	draw_rect(a + 28 * size, b, a + 29 * size, b + size, 0x000000);

	//15
	a = x + 7 * size;
	b -= size;
	draw_rect(a, b, a + 3 * size, b + size, 0x000000);
	draw_rect(a + 24 * size, b, a + 27 * size, b + size, 0x000000);
}

 void draw_headtrain(int x, int y, int size)//chieu cao: 28, chieu rong 33
{

	int tempx = x;
	int tempy = y;
	//layer 1
	tempx += 15 * size;
	draw_rect(tempx, tempy, tempx + size * 17, tempy + size, 0x000000);
	//layer 2
	tempy -= size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size, tempy, tempx + size * 16, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 16, tempy, tempx + size * 17, tempy + size, 0x000000);
	//layer 3:
	tempx += size;
	tempy -= size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size, tempy, tempx + size * 2, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x032966);
	draw_rect(tempx + size * 3, tempy, tempx + size * 12, tempy + size, 0x0252d4);
	draw_rect(tempx + size * 12, tempy, tempx + size * 13, tempy + size, 0x032966);
	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x000000);
	//layer 4:
	tempy -= size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size, tempy, tempx + size * 2, tempy + size, 0xA9A9A9);//
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x0252d4);//

	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 4, tempy, tempx + size * 5, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 5, tempy, tempx + size * 6, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 6, tempy, tempx + size * 8, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 8, tempy, tempx + size * 10, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 10, tempy, tempx + size * 11, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 11, tempy, tempx + size * 12, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 12, tempy, tempx + size * 13, tempy + size, 0x032966);

	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x696969);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x000000);
	//layer 5:
	tempx = x + 16 * size;
	tempy -= size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size, tempy, tempx + size * 2, tempy + size, 0xA9A9A9);//
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x0252d4);//

	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0x4383e8);//
	draw_rect(tempx + size * 4, tempy, tempx + size * 5, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 5, tempy, tempx + size * 7, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 7, tempy, tempx + size * 9, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 9, tempy, tempx + size * 10, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 10, tempy, tempx + size * 11, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 11, tempy, tempx + size * 12, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 12, tempy, tempx + size * 13, tempy + size, 0x032966);

	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x696969);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x000000);
	tempx = x + 5 * size;
	draw_rect(tempx, tempy, tempx + size * 3, tempy + size, 0x000000);
	//layer 6
	tempy -= size;
	tempx = x + 4 * size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size, tempy, tempx + size * 3, tempy + size, 0xFA8072);
	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0xFF0000);
	draw_rect(tempx + size * 4, tempy, tempx + size * 5, tempy + size, 0x000000);
	tempx += size * 12;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size, tempy, tempx + size * 2, tempy + size, 0xA9A9A9);//
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x0252d4);//

	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0x7eabf2);//
	draw_rect(tempx + size * 4, tempy, tempx + size * 6, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 6, tempy, tempx + size * 8, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 8, tempy, tempx + size * 9, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 9, tempy, tempx + size * 10, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 10, tempy, tempx + size * 12, tempy + size, 0x4383e8);

	draw_rect(tempx + size * 12, tempy, tempx + size * 13, tempy + size, 0x032966);

	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x696969);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x000000);
	//layer 7
	tempy -= size;
	tempx = x + 4 * size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size, tempy, tempx + size * 2, tempy + size, 0xFA8072);
	draw_rect(tempx + size * 2, tempy, tempx + size * 4, tempy + size, 0xFF0000);
	draw_rect(tempx + size * 4, tempy, tempx + size * 5, tempy + size, 0x000000);
	tempx += size * 12;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size, tempy, tempx + size * 2, tempy + size, 0x696969);//
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x0252d4);//

	draw_rect(tempx + size * 3, tempy, tempx + size * 5, tempy + size, 0x4383e8);//
	draw_rect(tempx + size * 5, tempy, tempx + size * 7, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 7, tempy, tempx + size * 8, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 8, tempy, tempx + size * 9, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 9, tempy, tempx + size * 11, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 11, tempy, tempx + size * 12, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 12, tempy, tempx + size * 13, tempy + size, 0x032966);

	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x696969);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x000000);
	//layer 8
	tempy -= size;
	tempx = x + 4 * size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size * 1, tempy, tempx + size * 4, tempy + size, 0xFF0000);
	draw_rect(tempx + size * 4, tempy, tempx + size * 5, tempy + size, 0x000000);
	tempx += size * 12;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size, tempy, tempx + size * 2, tempy + size, 0xA9A9A9);//
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x0252d4);//

	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0x4383e8);//
	draw_rect(tempx + size * 4, tempy, tempx + size * 6, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 6, tempy, tempx + size * 7, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 7, tempy, tempx + size * 8, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 8, tempy, tempx + size * 10, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 10, tempy, tempx + size * 12, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 12, tempy, tempx + size * 13, tempy + size, 0x032966);
	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x696969);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x000000);
	//layer 9
	tempy -= size;
	tempx = x + 5 * size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xFF0000);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x000000);
	tempx += 11 * size;
	draw_rect(tempx, tempy, tempx + size * 3, tempy + size, 0x000000);
	draw_rect(tempx + size, tempy, tempx + size * 2, tempy + size, 0x696969);//
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x0252d4);//

	draw_rect(tempx + size * 3, tempy, tempx + size * 5, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 5, tempy, tempx + size * 6, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 6, tempy, tempx + size * 7, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 7, tempy, tempx + size * 9, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 9, tempy, tempx + size * 12, tempy + size, 0x7eabf2);

	draw_rect(tempx + size * 12, tempy, tempx + size * 13, tempy + size, 0x0252d4);
	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x696969);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x000000);
	//layer 10
	tempy -= size;
	tempx = x + 5 * size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x000000);
	tempx += 11 * size;
	draw_rect(tempx, tempy, tempx + size * 3, tempy + size, 0x000000);
	draw_rect(tempx + size, tempy, tempx + size * 2, tempy + size, 0x696969);//
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x0252d4);//

	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 4, tempy, tempx + size * 5, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 5, tempy, tempx + size * 6, tempy + size, 0x7eabf2);
	draw_rect(tempx + size * 6, tempy, tempx + size * 8, tempy + size, 0x4383e8);
	draw_rect(tempx + size * 8, tempy, tempx + size * 12, tempy + size, 0x7eabf2);

	draw_rect(tempx + size * 12, tempy, tempx + size * 13, tempy + size, 0x0252d4);
	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x696969);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x000000);
	//layer 11
	tempy -= size;
	tempx = x + 5 * size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);//
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x000000);
	tempx += 11 * size;
	draw_rect(tempx, tempy, tempx + size * 3, tempy + size, 0x000000);
	draw_rect(tempx + size, tempy, tempx + size * 2, tempy + size, 0x696969);//
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x032966);//
	draw_rect(tempx + size * 3, tempy, tempx + size * 12, tempy + size, 0x0252d4);//
	draw_rect(tempx + size * 12, tempy, tempx + size * 13, tempy + size, 0x0252d4);
	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x696969);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x000000);
	//layer 12
	tempy -= size;
	tempx = x + 4 * size;
	draw_rect(tempx, tempy, tempx + size * 12, tempy + size, 0x000000);
	draw_rect(tempx + size * 12, tempy, tempx + size * 26, tempy + size, 0x696969);
	draw_rect(tempx + size * 26, tempy, tempx + size * 27, tempy + size, 0x000000);
	//layer 13
	tempy -= size;
	tempx = x + 2 * size;
	draw_rect(tempx, tempy, tempx + size * 2, tempy + size, 0x000000);
	draw_rect(tempx + size * 2, tempy, tempx + size * 7, tempy + size, 0xCDCDCD);
	draw_rect(tempx + size * 7, tempy, tempx + size * 8, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 8, tempy, tempx + size * 9, tempy + size, 0xCDCDCD);
	draw_rect(tempx + size * 9, tempy, tempx + size * 12, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 12, tempy, tempx + size * 13, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 13, tempy, tempx + size * 17, tempy + size, 0x696969);
	draw_rect(tempx + size * 17, tempy, tempx + size * 26, tempy + size, 0x000000);
	draw_rect(tempx + size * 26, tempy, tempx + size * 28, tempy + size, 0x696969);
	draw_rect(tempx + size * 28, tempy, tempx + size * 29, tempy + size, 0x000000);
	//14
	tempy -= size;
	tempx = x + size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xFF0000);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x463E3F);

	draw_rect(tempx + size * 3, tempy, tempx + size * 14, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 15, tempy, tempx + size * 17, tempy + size, 0x696969);
	draw_rect(tempx + size * 17, tempy, tempx + size * 18, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 18, tempy, tempx + size * 27, tempy + size, 0x696969);
	draw_rect(tempx + size * 27, tempy, tempx + size * 28, tempy + size, 0x000000);
	draw_rect(tempx + size * 28, tempy, tempx + size * 29, tempy + size, 0x696969);
	draw_rect(tempx + size * 29, tempy, tempx + size * 30, tempy + size, 0x000000);

	//15
	tempy -= size;
	tempx = x + size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xFF0000);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x463E3F);

	draw_rect(tempx + size * 3, tempy, tempx + size * 14, tempy + size, 0x808080);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 15, tempy, tempx + size * 17, tempy + size, 0x696969);
	draw_rect(tempx + size * 17, tempy, tempx + size * 18, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 18, tempy, tempx + size * 27, tempy + size, 0x696969);
	draw_rect(tempx + size * 27, tempy, tempx + size * 28, tempy + size, 0x000000);
	draw_rect(tempx + size * 28, tempy, tempx + size * 29, tempy + size, 0x696969);
	draw_rect(tempx + size * 29, tempy, tempx + size * 30, tempy + size, 0x000000);


	//16
	tempy -= size;
	tempx = x + size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xFF0000);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x463E3F);

	draw_rect(tempx + size * 3, tempy, tempx + size * 14, tempy + size, 0x808080);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 15, tempy, tempx + size * 17, tempy + size, 0x696969);
	draw_rect(tempx + size * 17, tempy, tempx + size * 18, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 18, tempy, tempx + size * 22, tempy + size, 0x696969);//
	draw_rect(tempx + size * 22, tempy, tempx + size * 27, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 27, tempy, tempx + size * 28, tempy + size, 0x000000);
	draw_rect(tempx + size * 28, tempy, tempx + size * 29, tempy + size, 0x696969);
	draw_rect(tempx + size * 29, tempy, tempx + size * 30, tempy + size, 0x000000);
	//17
	tempy -= size;
	tempx = x + size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xFF0000);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x463E3F);

	draw_rect(tempx + size * 3, tempy, tempx + size * 14, tempy + size, 0x808080);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 15, tempy, tempx + size * 17, tempy + size, 0x696969);
	draw_rect(tempx + size * 17, tempy, tempx + size * 18, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 18, tempy, tempx + size * 21, tempy + size, 0x696969);//
	draw_rect(tempx + size * 21, tempy, tempx + size * 22, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 22, tempy, tempx + size * 27, tempy + size, 0x000000);
	draw_rect(tempx + size * 27, tempy, tempx + size * 29, tempy + size, 0x696969);
	draw_rect(tempx + size * 29, tempy, tempx + size * 30, tempy + size, 0x000000);
	//18
	tempy -= size;
	tempx = x + size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xFF0000);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0x463E3F);

	draw_rect(tempx + size * 3, tempy, tempx + size * 14, tempy + size, 0x808080);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 15, tempy, tempx + size * 17, tempy + size, 0x696969);
	draw_rect(tempx + size * 17, tempy, tempx + size * 18, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 18, tempy, tempx + size * 21, tempy + size, 0xA9A9A9);//
	draw_rect(tempx + size * 21, tempy, tempx + size * 22, tempy + size, 0x000000);
	draw_rect(tempx + size * 22, tempy, tempx + size * 29, tempy + size, 0x696969);
	draw_rect(tempx + size * 29, tempy, tempx + size * 30, tempy + size, 0x000000);
	//19
	tempy -= size;
	tempx = x + 2 * size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0x696969);
	draw_rect(tempx + size * 2, tempy, tempx + size * 13, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 14, tempy, tempx + size * 16, tempy + size, 0x696969);
	draw_rect(tempx + size * 16, tempy, tempx + size * 17, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 17, tempy, tempx + size * 20, tempy + size, 0x000000);
	draw_rect(tempx + size * 20, tempy, tempx + size * 22, tempy + size, 0x696969);
	draw_rect(tempx + size * 22, tempy, tempx + size * 28, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 28, tempy, tempx + size * 29, tempy + size, 0x000000);

	//20
	tempy -= size;
	tempx = x + 2 * size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 21, tempy + size, 0x696969);
	draw_rect(tempx + size * 21, tempy, tempx + size * 22, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 22, tempy, tempx + size * 28, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 28, tempy, tempx + size * 29, tempy + size, 0x000000);
	//21
	tempy -= size;
	tempx = x + size;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 6, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 6, tempy, tempx + size * 9, tempy + size, 0x696969);
	draw_rect(tempx + size * 9, tempy, tempx + size * 13, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 13, tempy, tempx + size * 16, tempy + size, 0x696969);
	draw_rect(tempx + size * 16, tempy, tempx + size * 20, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 20, tempy, tempx + size * 21, tempy + size, 0x696969);
	draw_rect(tempx + size * 21, tempy, tempx + size * 22, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 22, tempy, tempx + size * 24, tempy + size, 0xFFFACD);

	draw_rect(tempx + size * 24, tempy, tempx + size * 28, tempy + size, 0x000000);
	draw_rect(tempx + size * 28, tempy, tempx + size * 30, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 30, tempy, tempx + size * 31, tempy + size, 0x000000);
	//22
	tempy -= size;
	tempx = x;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 3, tempy, tempx + size * 7, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 7, tempy, tempx + size * 8, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 8, tempy, tempx + size * 9, tempy + size, 0x696969);
	draw_rect(tempx + size * 9, tempy, tempx + size * 10, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 10, tempy, tempx + size * 14, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 15, tempy, tempx + size * 16, tempy + size, 0x696969);
	draw_rect(tempx + size * 16, tempy, tempx + size * 17, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 17, tempy, tempx + size * 21, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 21, tempy, tempx + size * 22, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 22, tempy, tempx + size * 24, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 24, tempy, tempx + size * 25, tempy + size, 0x000000);
	draw_rect(tempx + size * 25, tempy, tempx + size * 29, tempy + size, 0x696969);
	draw_rect(tempx + size * 29, tempy, tempx + size * 30, tempy + size, 0x000000);
	draw_rect(tempx + size * 30, tempy, tempx + size * 32, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 32, tempy, tempx + size * 33, tempy + size, 0x000000);
	//23 
	tempy -= size;
	tempx = x;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 4, tempy, tempx + size * 6, tempy + size, 0x000000);
	draw_rect(tempx + size * 6, tempy, tempx + size * 8, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 8, tempy, tempx + size * 9, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 9, tempy, tempx + size * 11, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 11, tempy, tempx + size * 13, tempy + size, 0x000000);
	draw_rect(tempx + size * 13, tempy, tempx + size * 15, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 15, tempy, tempx + size * 16, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 16, tempy, tempx + size * 18, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 18, tempy, tempx + size * 20, tempy + size, 0x000000);
	draw_rect(tempx + size * 20, tempy, tempx + size * 21, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 21, tempy, tempx + size * 22, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 22, tempy, tempx + size * 23, tempy + size, 0xFFFACD);

	draw_rect(tempx + size * 23, tempy, tempx + size * 24, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 24, tempy, tempx + size * 26, tempy + size, 0x696969);
	draw_rect(tempx + size * 26, tempy, tempx + size * 28, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 28, tempy, tempx + size * 30, tempy + size, 0x696969);

	draw_rect(tempx + size * 30, tempy, tempx + size * 31, tempy + size, 0x000000);
	draw_rect(tempx + size * 31, tempy, tempx + size * 32, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 32, tempy, tempx + size * 33, tempy + size, 0x000000);
	//24
	tempy -= size;
	tempx = x;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0x000000);
	draw_rect(tempx + size * 4, tempy, tempx + size * 6, tempy + size, 0x696969);
	draw_rect(tempx + size * 6, tempy, tempx + size * 7, tempy + size, 0x000000);
	draw_rect(tempx + size * 7, tempy, tempx + size * 10, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 10, tempy, tempx + size * 11, tempy + size, 0x000000);
	draw_rect(tempx + size * 11, tempy, tempx + size * 13, tempy + size, 0x696969);
	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x000000);

	draw_rect(tempx + size * 14, tempy, tempx + size * 17, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 17, tempy, tempx + size * 18, tempy + size, 0x000000);
	draw_rect(tempx + size * 18, tempy, tempx + size * 20, tempy + size, 0x696969);
	draw_rect(tempx + size * 20, tempy, tempx + size * 21, tempy + size, 0x000000);
	draw_rect(tempx + size * 21, tempy, tempx + size * 23, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 23, tempy, tempx + size * 24, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 24, tempy, tempx + size * 25, tempy + size, 0x696969);
	draw_rect(tempx + size * 25, tempy, tempx + size * 29, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 29, tempy, tempx + size * 30, tempy + size, 0x696969);
	draw_rect(tempx + size * 30, tempy, tempx + size * 32, tempy + size, 0x000000);

	//25
	tempy -= size;
	tempx = x;
	draw_rect(tempx, tempy, tempx + size * 1, tempy + size, 0x000000);
	draw_rect(tempx + size * 1, tempy, tempx + size * 2, tempy + size, 0xFFFACD);
	draw_rect(tempx + size * 2, tempy, tempx + size * 3, tempy + size, 0xfcba03);
	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0x696969);
	draw_rect(tempx + size * 4, tempy, tempx + size * 6, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 6, tempy, tempx + size * 7, tempy + size, 0x696969);

	draw_rect(tempx + size * 7, tempy, tempx + size * 8, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 8, tempy, tempx + size * 9, tempy + size, 0x000000);
	draw_rect(tempx + size * 9, tempy, tempx + size * 10, tempy + size, 0x463E3F);

	draw_rect(tempx + size * 10, tempy, tempx + size * 11, tempy + size, 0x696969);
	draw_rect(tempx + size * 11, tempy, tempx + size * 13, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x696969);

	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 15, tempy, tempx + size * 16, tempy + size, 0x000000);
	draw_rect(tempx + size * 16, tempy, tempx + size * 17, tempy + size, 0x463E3F);

	draw_rect(tempx + size * 17, tempy, tempx + size * 18, tempy + size, 0x696969);
	draw_rect(tempx + size * 18, tempy, tempx + size * 20, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 20, tempy, tempx + size * 21, tempy + size, 0x696969);

	draw_rect(tempx + size * 21, tempy, tempx + size * 22, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 22, tempy, tempx + size * 23, tempy + size, 0x000000);
	draw_rect(tempx + size * 23, tempy, tempx + size * 24, tempy + size, 0x463E3F);
	draw_rect(tempx + size * 24, tempy, tempx + size * 25, tempy + size, 0x696969);
	draw_rect(tempx + size * 25, tempy, tempx + size * 29, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 29, tempy, tempx + size * 30, tempy + size, 0x696969);
	draw_rect(tempx + size * 30, tempy, tempx + size * 31, tempy + size, 0x000000);
	//26
	tempy -= size;
	tempx = x;
	draw_rect(tempx + size, tempy, tempx + size * 3, tempy + size, 0x000000);
	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0x696969);
	draw_rect(tempx + size * 4, tempy, tempx + size * 6, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 6, tempy, tempx + size * 7, tempy + size, 0x696969);

	draw_rect(tempx + size * 7, tempy, tempx + size * 8, tempy + size, 0x000000);
	draw_rect(tempx + size * 9, tempy, tempx + size * 10, tempy + size, 0x000000);

	draw_rect(tempx + size * 10, tempy, tempx + size * 11, tempy + size, 0x696969);
	draw_rect(tempx + size * 11, tempy, tempx + size * 13, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x696969);

	draw_rect(tempx + size * 14, tempy, tempx + size * 15, tempy + size, 0x000000);
	draw_rect(tempx + size * 16, tempy, tempx + size * 17, tempy + size, 0x000000);

	draw_rect(tempx + size * 17, tempy, tempx + size * 18, tempy + size, 0x696969);
	draw_rect(tempx + size * 18, tempy, tempx + size * 20, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 20, tempy, tempx + size * 21, tempy + size, 0x696969);

	draw_rect(tempx + size * 21, tempy, tempx + size * 22, tempy + size, 0x000000);
	draw_rect(tempx + size * 23, tempy, tempx + size * 24, tempy + size, 0x000000);

	draw_rect(tempx + size * 24, tempy, tempx + size * 26, tempy + size, 0x696969);
	draw_rect(tempx + size * 26, tempy, tempx + size * 28, tempy + size, 0xA9A9A9);
	draw_rect(tempx + size * 28, tempy, tempx + size * 30, tempy + size, 0x696969);
	draw_rect(tempx + size * 30, tempy, tempx + size * 31, tempy + size, 0x000000);
	//27
	tempy -= size;
	tempx = x;

	draw_rect(tempx + size * 3, tempy, tempx + size * 4, tempy + size, 0x000000);
	draw_rect(tempx + size * 4, tempy, tempx + size * 6, tempy + size, 0x696969);
	draw_rect(tempx + size * 6, tempy, tempx + size * 7, tempy + size, 0x000000);

	draw_rect(tempx + size * 10, tempy, tempx + size * 11, tempy + size, 0x000000);
	draw_rect(tempx + size * 11, tempy, tempx + size * 13, tempy + size, 0x696969);
	draw_rect(tempx + size * 13, tempy, tempx + size * 14, tempy + size, 0x000000);

	draw_rect(tempx + size * 17, tempy, tempx + size * 18, tempy + size, 0x000000);
	draw_rect(tempx + size * 18, tempy, tempx + size * 20, tempy + size, 0x696969);
	draw_rect(tempx + size * 20, tempy, tempx + size * 21, tempy + size, 0x000000);

	draw_rect(tempx + size * 24, tempy, tempx + size * 25, tempy + size, 0x000000);
	draw_rect(tempx + size * 25, tempy, tempx + size * 29, tempy + size, 0x696969);
	draw_rect(tempx + size * 29, tempy, tempx + size * 30, tempy + size, 0x000000);

	//28
	tempy -= size;
	tempx = x + size * 4;

	draw_rect(tempx, tempy, tempx + size * 2, tempy + size, 0x000000);
	draw_rect(tempx + size * 7, tempy, tempx + size * 9, tempy + size, 0x000000);
	draw_rect(tempx + size * 14, tempy, tempx + size * 16, tempy + size, 0x000000);
	draw_rect(tempx + size * 21, tempy, tempx + size * 25, tempy + size, 0x000000);

}
void drawTurtel(int x, int y)
{
	int k = x + 5;
	int h = y;
	//1th layer
	x = k;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x000000);
	draw_rect(x + 10, y, x + 15, y + 5, 0x000000);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	x += 60;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x000000);
	draw_rect(x + 10, y, x + 15, y + 5, 0x000000);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);

	//2 th layer
	x = k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	draw_rect(x + 10, y, x + 15, y + 5, 0x266b57);
	draw_rect(x + 15, y, x + 20, y + 5, 0x1a7d74);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	x += 60;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	draw_rect(x + 10, y, x + 15, y + 5, 0x266b57);
	draw_rect(x + 15, y, x + 20, y + 5, 0x1a7d74);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	//3th layer
	x = k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	draw_rect(x + 10, y, x + 15, y + 5, 0x1a7d74);
	draw_rect(x + 15, y, x + 20, y + 5, 0x1a7d74);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	x += 25;
	for (int h = 1; h <= 7; h++)
	{
		draw_rect(x, y, x + 5 * h, y + 5, 0xFFCC33);

	}
	x += 35;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	draw_rect(x + 10, y, x + 15, y + 5, 0x1a7d74);
	draw_rect(x + 15, y, x + 20, y + 5, 0x1a7d74);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	//4th layer
	x = k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x1a7d74);
	draw_rect(x + 10, y, x + 15, y + 5, 0x1a7d74);
	draw_rect(x + 15, y, x + 20, y + 5, 0x33CC99);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	draw_rect(x + 25, y, x + 30, y + 5, 0x000000);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);
	x += 35;
	for (int h = 1; h <= 3; h++)
	{
		draw_rect(x, y, x + 5 * h, y + 5, 0xFFFF33);

	}
	x += 15;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x000000);
	draw_rect(x + 10, y, x + 15, y + 5, 0x000000);
	draw_rect(x + 15, y, x + 20, y + 5, 0x1a7d74);
	draw_rect(x + 20, y, x + 25, y + 5, 0x1a7d74);
	draw_rect(x + 25, y, x + 30, y + 5, 0x33CC99);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);
	//5th layer/////
	x = k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x1a7d74);
	draw_rect(x + 10, y, x + 15, y + 5, 0x33CC99);//
	draw_rect(x + 15, y, x + 20, y + 5, 0x33CC99);//
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	draw_rect(x + 25, y, x + 30, y + 5, 0x000000);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);
	draw_rect(x + 35, y, x + 40, y + 5, 0x000000);
	draw_rect(x + 40, y, x + 45, y + 5, 0xFFFF33);
	draw_rect(x + 45, y, x + 50, y + 5, 0x000000);
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0x000000);
	draw_rect(x + 65, y, x + 70, y + 5, 0x1a7d74);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x33CC99);
	draw_rect(x + 80, y, x + 85, y + 5, 0x000000);
	//6th layer
	x = k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x000000);
	draw_rect(x + 10, y, x + 15, y + 5, 0x33CC99);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x33CC99);
	draw_rect(x + 35, y, x + 40, y + 5, 0x33CC99);
	draw_rect(x + 40, y, x + 45, y + 5, 0x000000);
	draw_rect(x + 45, y, x + 50, y + 5, 0x266b57);
	draw_rect(x + 50, y, x + 55, y + 5, 0x1a7d74);
	draw_rect(x + 55, y, x + 60, y + 5, 0x1a7d74);
	draw_rect(x + 60, y, x + 65, y + 5, 0x33CC99);
	draw_rect(x + 65, y, x + 70, y + 5, 0x000000);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x000000);
	//7th layer
	x = k - 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x1a7d74);
	draw_rect(x + 35, y, x + 40, y + 5, 0x33CC99);
	draw_rect(x + 40, y, x + 45, y + 5, 0x33CC99);
	draw_rect(x + 45, y, x + 50, y + 5, 0x000000);
	draw_rect(x + 50, y, x + 55, y + 5, 0x266b57);
	draw_rect(x + 55, y, x + 60, y + 5, 0x1a7d74);
	draw_rect(x + 60, y, x + 65, y + 5, 0x1a7d74);
	draw_rect(x + 65, y, x + 70, y + 5, 0x33CC99);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x996633);
	draw_rect(x + 85, y, x + 90, y + 5, 0x996633);
	draw_rect(x + 90, y, x + 95, y + 5, 0x000000);
	//8th layer
	x = k - 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x1a7d74);
	draw_rect(x + 35, y, x + 40, y + 5, 0x33CC99);
	draw_rect(x + 40, y, x + 45, y + 5, 0x000000);
	draw_rect(x + 45, y, x + 50, y + 5, 0xFFFF33);
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	draw_rect(x + 55, y, x + 60, y + 5, 0x1a7d74);
	draw_rect(x + 60, y, x + 65, y + 5, 0x1a7d74);
	draw_rect(x + 65, y, x + 70, y + 5, 0x33CC99);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x996633);
	draw_rect(x + 85, y, x + 90, y + 5, 0x996633);
	draw_rect(x + 90, y, x + 95, y + 5, 0x000000);
	//9th layer
	x = k - 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x33CC99);//
	draw_rect(x + 35, y, x + 40, y + 5, 0x000000);
	draw_rect(x + 40, y, x + 45, y + 5, 0xFFFF33);
	draw_rect(x + 45, y, x + 50, y + 5, 0xFFFF33);
	draw_rect(x + 50, y, x + 55, y + 5, 0xFFFF33);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0x33CC99);
	draw_rect(x + 65, y, x + 70, y + 5, 0x33CC99);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x996633);
	draw_rect(x + 85, y, x + 90, y + 5, 0x996633);
	draw_rect(x + 90, y, x + 95, y + 5, 0x000000);
	//10th layer
	x = k - 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);//
	draw_rect(x + 35, y, x + 40, y + 5, 0xFFFF33);
	draw_rect(x + 40, y, x + 45, y + 5, 0xFFFF33);
	draw_rect(x + 45, y, x + 50, y + 5, 0xFFFF33);
	draw_rect(x + 50, y, x + 55, y + 5, 0xFFFF33);
	draw_rect(x + 55, y, x + 60, y + 5, 0xFFFF33);
	draw_rect(x + 60, y, x + 65, y + 5, 0x000000);
	draw_rect(x + 65, y, x + 70, y + 5, 0x33CC99);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x996633);
	draw_rect(x + 85, y, x + 90, y + 5, 0x996633);
	draw_rect(x + 90, y, x + 95, y + 5, 0x000000);
	//11 th layer
	x = k - 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);//
	draw_rect(x + 35, y, x + 40, y + 5, 0xFFFF33);
	draw_rect(x + 40, y, x + 45, y + 5, 0xFFFF33);
	draw_rect(x + 45, y, x + 50, y + 5, 0xFFFF33);
	draw_rect(x + 50, y, x + 55, y + 5, 0xFFFF33);
	draw_rect(x + 55, y, x + 60, y + 5, 0xFFFF33);
	draw_rect(x + 60, y, x + 65, y + 5, 0x000000);
	draw_rect(x + 65, y, x + 70, y + 5, 0x33CC99);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x996633);
	draw_rect(x + 85, y, x + 90, y + 5, 0x996633);
	draw_rect(x + 90, y, x + 95, y + 5, 0x000000);
	//12th layer
	x = k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x1a7d74);
	for (int h = 0; h < 7; h++)
	{
		draw_rect(x + 25 + h * 5, y, x + 30 + h * 5, y + 5, 0x000000);
	}
	draw_rect(x + 60, y, x + 65, y + 5, 0x33CC99);
	draw_rect(x + 65, y, x + 70, y + 5, 0x000000);
	draw_rect(x + 70, y, x + 75, y + 5, 0x996633);
	draw_rect(x + 75, y, x + 80, y + 5, 0x996633);
	draw_rect(x + 80, y, x + 85, y + 5, 0x000000);

	draw_rect(x + 90, y, x + 95, y + 5, 0xCC3300);
	//13th layer
	x = k + 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x266b57);
	for (int h = 0; h < 4; h++)
	{
		draw_rect(x + 30 + h * 5, y, x + 35 + h * 5, y + 5, 0x1a7d74);
	}
	draw_rect(x + 50, y, x + 55, y + 5, 0x33CC99);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0x996633);
	draw_rect(x + 65, y, x + 70, y + 5, 0x996633);
	draw_rect(x + 70, y, x + 75, y + 5, 0x000000);

	draw_rect(x + 80, y, x + 85, y + 5, 0xCC3300);
	draw_rect(x + 85, y, x + 90, y + 5, 0xCC3300);

	//14th layer
	x = k + 10;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x000000);
	draw_rect(x + 10, y, x + 15, y + 5, 0x266b57);
	draw_rect(x + 15, y, x + 20, y + 5, 0x266b57);
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 20 + h * 5, y, x + 25 + h * 5, y + 5, 0x1a7d74);
	}
	draw_rect(x + 45, y, x + 50, y + 5, 0x33CC99);
	draw_rect(x + 50, y, x + 55, y + 5, 0x33CC99);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0x000000);

	draw_rect(x + 70, y, x + 75, y + 5, 0xCC3300);
	draw_rect(x + 75, y, x + 80, y + 5, 0xFF3300);
	draw_rect(x + 80, y, x + 85, y + 5, 0xCC3300);
	//15th layer
	x = k + 10;
	y += 5;
	for (int h = 0; h < 4; h++)
	{
		draw_rect(x + h * 5, y, x + 5 + h * 5, y + 5, 0xCC3300);
	}
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 20 + h * 5, y, x + 25 + h * 5, y + 5, 0x1a7d74);
	}
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 45 + h * 5, y, x + 50 + h * 5, y + 5, 0xCC3300);
	}
	draw_rect(x + 70, y, x + 75, y + 5, 0xFF3300);
	draw_rect(x + 75, y, x + 80, y + 5, 0xFF6666);
	draw_rect(x + 80, y, x + 85, y + 5, 0xFF3300);
	draw_rect(x + 85, y, x + 90, y + 5, 0xCC3300);
	//16th layer
	x = k + 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0xCC3300);
	draw_rect(x + 5, y, x + 10, y + 5, 0xFF3300);
	draw_rect(x + 10, y, x + 15, y + 5, 0xFF3300);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 25 + h * 5, y, x + 30 + h * 5, y + 5, 0xCC3300);
	}
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0xFF3300);
	draw_rect(x + 65, y, x + 70, y + 5, 0xFF3300);
	draw_rect(x + 70, y, x + 75, y + 5, 0xCC3300);
	draw_rect(x + 75, y, x + 80, y + 5, 0xFF6666);
	draw_rect(x + 80, y, x + 85, y + 5, 0xFF3300);
	draw_rect(x + 85, y, x + 90, y + 5, 0xCC3300);
	//17th layer
	x = k + 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0xCC3300);
	draw_rect(x + 5, y, x + 10, y + 5, 0xFF3300);
	draw_rect(x + 10, y, x + 15, y + 5, 0xFF3300);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 25 + h * 5, y, x + 30 + h * 5, y + 5, 0xCC3300);
	}
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0xFF6666);
	draw_rect(x + 65, y, x + 70, y + 5, 0xFF3300);
	draw_rect(x + 70, y, x + 75, y + 5, 0xCC3300);
	draw_rect(x + 75, y, x + 80, y + 5, 0xFF3300);
	draw_rect(x + 80, y, x + 85, y + 5, 0xCC3300);
	//18th layer
	x = k + 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0xCC3300);
	draw_rect(x + 5, y, x + 10, y + 5, 0xFF3300);
	draw_rect(x + 10, y, x + 15, y + 5, 0xFF6666);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0xFFFFFF);
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 25 + h * 5, y, x + 30 + h * 5, y + 5, 0xFF6666);
	}
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	draw_rect(x + 55, y, x + 60, y + 5, 0xFFFFFF);
	draw_rect(x + 60, y, x + 65, y + 5, 0xFF6666);
	draw_rect(x + 65, y, x + 70, y + 5, 0xFF6666);
	draw_rect(x + 70, y, x + 75, y + 5, 0xCC3300);
	draw_rect(x + 75, y, x + 80, y + 5, 0xCC3300);
	draw_rect(x + 80, y, x + 85, y + 5, 0xCC3300);
	//19th layer
	x = k + 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0xCC3300);
	for (int h = 0; h < 13; h++)
	{
		draw_rect(x + 5 + h * 5, y, x + 10 + h * 5, y + 5, 0xFF6666);
	}
	draw_rect(x + 70, y, x + 75, y + 5, 0xCC3300);
	//20th layer
	x = k + 10;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0xCC3300);
	draw_rect(x + 5, y, x + 10, y + 5, 0xCC3300);
	for (int h = 0; h < 9; h++)
	{
		draw_rect(x + 10 + h * 5, y, x + 15 + h * 5, y + 5, 0xFF6666);
	}
	draw_rect(x + 55, y, x + 60, y + 5, 0xCC3300);
	draw_rect(x + 60, y, x + 65, y + 5, 0xCC3300);
	//21th layer
	x = k + 10;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	for (int h = 0; h < 9; h++)
	{
		draw_rect(x + 10 + h * 5, y, x + 15 + h * 5, y + 5, 0xCC3300);
	}
	draw_rect(x + 55, y, x + 60, y + 5, 0x33CC99);
	draw_rect(x + 60, y, x + 65, y + 5, 0x000000);
	//22th layer
	x = k + 15;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	draw_rect(x + 10, y, x + 15, y + 5, 0x266b57);
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 15 + h * 5, y, x + 20 + h * 5, y + 5, 0x1a7d74);

	}
	draw_rect(x + 40, y, x + 45, y + 5, 0x33CC99);
	draw_rect(x + 45, y, x + 50, y + 5, 0x33CC99);
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	//23th layer
	x = k + 20;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	for (int h = 0; h < 4; h++)
	{
		draw_rect(x + 10 + h * 5, y, x + 15 + h * 5, y + 5, 0x1a7d74);
	}
	draw_rect(x + 30, y, x + 35, y + 5, 0x33CC99);
	draw_rect(x + 35, y, x + 40, y + 5, 0x33CC99);
	draw_rect(x + 40, y, x + 45, y + 5, 0x000000);
	//24th layer
	x = k + 25;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	for (int h = 0; h < 3; h++)
	{
		draw_rect(x + 5 + h * 5, y, x + 10 + h * 5, y + 5, 0x1a7d74);
	}
	draw_rect(x + 20, y, x + 25, y + 5, 0x33CC99);
	draw_rect(x + 25, y, x + 30, y + 5, 0x33CC99);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);
	//25th ;ayer
	x = k + 30;
	y += 5;
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + h * 5, y, x + 5 + h * 5, y + 5, 0x000000);
	}
}
void draw_ghost(int x, int y)//
{
	int tempx = x;
	int tempy = y - 3;

	//1 layer
	tempx += 12 * 3;
	for (int i = 0; i < 7; i++)
	{
		draw_rect(tempx + 3 * i, tempy, tempx + 3 * i + 3, tempy + 3, 0x000000);
	}
	//2layer
	tempy -= 3;
	tempx -= 2 * 3;
	for (int i = 0; i < 2; i++)
	{
		draw_rect(tempx + 3 * i, tempy, tempx + 3 * i + 3, tempy + 3, 0x000000);
	}
	draw_rect(tempx + 3 * 2, tempy, tempx + 3 * 9, tempy + 3, 0xC0C0C0);
	tempx += 9 * 3;
	for (int i = 0; i < 2; i++)
	{
		draw_rect(tempx + 3 * i, tempy, tempx + 3 * i + 3, tempy + 3, 0x000000);
	}
	//3 layer
	tempx -= 10 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 1, tempy, tempx + 3 * 9, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 9, tempy, tempx + 3 * 12, tempy + 3, 0xC0C0C0);
	tempx += 12 * 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	//4layer
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 6, tempy + 3, 0x000000);
	tempx -= 13 * 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 1, tempy, tempx + 3 * 10, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 10, tempy, tempx + 3 * 13, tempy + 3, 0xC0C0C0);
	//5 layer
	tempx = x + 7 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 13, tempy + 3, 0xffffff);
	draw_rect(tempx + 3, tempy, tempx + 3 * 13, tempy + 3, 0xffffff);
	tempx += 3 * 13;
	draw_rect(tempx, tempy, tempx + 6, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 2, tempy, tempx + 3 * 3, tempy + 3, 0x000000);
	//6 layer
	tempx = x + 7 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 13, tempy + 3, 0xffffff);
	draw_rect(tempx + 3, tempy, tempx + 3 * 13, tempy + 3, 0xffffff);
	tempx += 3 * 13;
	draw_rect(tempx, tempy, tempx + 9, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 4, tempy + 3, 0x000000);
	//7 layer
	tempx = x + 6 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 4, tempy + 3, 0xffffff);
	tempx += 4 * 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 4, tempy + 3, 0xffffff);
	tempx += 4 * 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 7, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 9, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 9, tempy, tempx + 3 * 10, tempy + 3, 0x000000);
	//8 layer
	tempx = x + 6 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 3, tempy + 3, 0xffffff);
	tempx += 3 * 3;
	draw_rect(tempx, tempy, tempx + 6, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 2, tempy, tempx + 3 * 5, tempy + 3, 0xffffff);

	tempx += 5 * 3;
	draw_rect(tempx, tempy, tempx + 3 * 2, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 2, tempy, tempx + 3 * 7, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 9, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 9, tempy, tempx + 3 * 10, tempy + 3, 0x000000);
	//9th layer
	tempx = x + 6 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 2, tempy + 3, 0xffffff);
	tempx += 3 * 2;
	draw_rect(tempx, tempy, tempx + 3 * 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 7, tempy + 3, 0xffffff);

	tempx = x + 14 * 3;
	draw_rect(tempx, tempy, tempx + 3 * 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 7, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 10, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 10, tempy, tempx + 3 * 11, tempy + 3, 0x000000);
	//10th layer
	tempx = x + 6 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 2, tempy + 3, 0xffffff);
	tempx += 3 * 2;
	draw_rect(tempx, tempy, tempx + 3 * 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 7, tempy + 3, 0xffffff);

	tempx = x + 14 * 3;
	draw_rect(tempx, tempy, tempx + 3 * 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 7, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 10, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 10, tempy, tempx + 3 * 11, tempy + 3, 0x000000);
	//11 th layer
	tempx = x + 3 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3 * 4, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 4, tempy, tempx + 3 * 18, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 18, tempy, tempx + 3 * 21, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 21, tempy, tempx + 3 * 22, tempy + 3, 0x000000);
	//12th layer
	tempx = x + 2 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 19, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 19, tempy, tempx + 3 * 22, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 22, tempy, tempx + 3 * 23, tempy + 3, 0x000000);
	//13th layer
	tempx = x + 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 10, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 10, tempy, tempx + 3 * 13, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 13, tempy, tempx + 3 * 20, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 20, tempy, tempx + 3 * 23, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 23, tempy, tempx + 3 * 25, tempy + 3, 0x000000);
	//14th layer
	tempx = x + 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 16, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 16, tempy, tempx + 3 * 20, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 20, tempy, tempx + 3 * 24, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 24, tempy, tempx + 3 * 25, tempy + 3, 0x000000);
	tempx = x + 3 * 7;//ve bong
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0xC0C0C0);
	//15th layer
	tempx = x;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 6, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 6, tempy, tempx + 3 * 8, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 8, tempy, tempx + 3 * 16, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 16, tempy, tempx + 3 * 17, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 17, tempy, tempx + 3 * 21, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 21, tempy, tempx + 3 * 22, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 22, tempy, tempx + 3 * 25, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 25, tempy, tempx + 3 * 26, tempy + 3, 0x000000);
	//15th layer
	tempx = x;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 5, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 5, tempy, tempx + 3 * 8, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 8, tempy, tempx + 3 * 15, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 16, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 16, tempy, tempx + 3 * 22, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 22, tempy, tempx + 3 * 23, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 23, tempy, tempx + 3 * 25, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 25, tempy, tempx + 3 * 26, tempy + 3, 0x000000);
	//16 th layer
	tempx = x;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 4, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 4, tempy, tempx + 3 * 8, tempy + 3, 0xC0C0C0);

	draw_rect(tempx + 3 * 8, tempy, tempx + 3 * 14, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 14, tempy, tempx + 3 * 15, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 23, tempy + 3, 0xffffff);

	draw_rect(tempx + 3 * 23, tempy, tempx + 3 * 25, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 25, tempy, tempx + 3 * 26, tempy + 3, 0x000000);
	//17 th layer
	tempx = x;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 4, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 4, tempy, tempx + 3 * 8, tempy + 3, 0xC0C0C0);

	draw_rect(tempx + 3 * 8, tempy, tempx + 3 * 14, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 14, tempy, tempx + 3 * 15, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 23, tempy + 3, 0xffffff);

	draw_rect(tempx + 3 * 23, tempy, tempx + 3 * 25, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 25, tempy, tempx + 3 * 26, tempy + 3, 0x000000);
	//18th layer
	tempx = x + 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3 * 5, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 5, tempy, tempx + 3 * 7, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 9, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 9, tempy, tempx + 3 * 10, tempy + 3, 0xC0C0C0);
	draw_rect(tempx + 3 * 10, tempy, tempx + 3 * 13, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 13, tempy, tempx + 3 * 16, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 16, tempy, tempx + 3 * 22, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 22, tempy, tempx + 3 * 24, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 24, tempy, tempx + 3 * 25, tempy + 3, 0x000000);
	//19th layer
	tempx = x + 2 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 3, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 4, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 4, tempy, tempx + 3 * 6, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 6, tempy, tempx + 3 * 8, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 8, tempy, tempx + 3 * 9, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 9, tempy, tempx + 3 * 13, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 13, tempy, tempx + 3 * 14, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 14, tempy, tempx + 3 * 15, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 16, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 16, tempy, tempx + 3 * 21, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 21, tempy, tempx + 3 * 23, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 23, tempy, tempx + 3 * 24, tempy + 3, 0x000000);
	//20th
	tempx = x + 3 * 3;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 2, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 2, tempy, tempx + 3 * 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 5, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 5, tempy, tempx + 3 * 7, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 8, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 8, tempy, tempx + 3 * 12, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 12, tempy, tempx + 3 * 13, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 13, tempy, tempx + 3 * 14, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 14, tempy, tempx + 3 * 15, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 21, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 21, tempy, tempx + 3 * 23, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 23, tempy, tempx + 3 * 24, tempy + 3, 0x000000);
	//21th
	tempx = x + 3 * 4;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3 * 2, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 2, tempy, tempx + 3 * 4, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 4, tempy, tempx + 3 * 6, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 6, tempy, tempx + 3 * 7, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 12, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 12, tempy, tempx + 3 * 13, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 13, tempy, tempx + 3 * 14, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 14, tempy, tempx + 3 * 15, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 20, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 20, tempy, tempx + 3 * 22, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 22, tempy, tempx + 3 * 23, tempy + 3, 0x000000);
	//22th
	tempx = x + 3 * 5;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 1, tempy, tempx + 3 * 3, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 5, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 5, tempy, tempx + 3 * 6, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 6, tempy, tempx + 3 * 11, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 11, tempy, tempx + 3 * 12, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 12, tempy, tempx + 3 * 14, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 14, tempy, tempx + 3 * 15, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 17, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 17, tempy, tempx + 3 * 18, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 18, tempy, tempx + 3 * 19, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 19, tempy, tempx + 3 * 21, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 21, tempy, tempx + 3 * 22, tempy + 3, 0x000000);
	//23th
	tempx = x + 3 * 5;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 1, tempy, tempx + 3 * 3, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 5, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 5, tempy, tempx + 3 * 6, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 6, tempy, tempx + 3 * 10, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 10, tempy, tempx + 3 * 12, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 12, tempy, tempx + 3 * 13, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 13, tempy, tempx + 3 * 14, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 14, tempy, tempx + 3 * 15, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 17, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 17, tempy, tempx + 3 * 21, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 21, tempy, tempx + 3 * 22, tempy + 3, 0x000000);
	//24th
	tempx = x + 3 * 5;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 1, tempy, tempx + 3 * 3, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 5, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 5, tempy, tempx + 3 * 7, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 10, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 10, tempy, tempx + 3 * 13, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 13, tempy, tempx + 3 * 15, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 17, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 17, tempy, tempx + 3 * 22, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 22, tempy, tempx + 3 * 23, tempy + 3, 0x000000);
	//25th
	tempx = x + 3 * 5;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 1, tempy, tempx + 3 * 4, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 4, tempy, tempx + 3 * 5, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 5, tempy, tempx + 3 * 7, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 11, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 11, tempy, tempx + 3 * 15, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 16, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 16, tempy, tempx + 3 * 17, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 17, tempy, tempx + 3 * 23, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 23, tempy, tempx + 3 * 24, tempy + 3, 0x000000);
	//26th
	tempx = x + 3 * 6;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 1, tempy, tempx + 3 * 3, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 4, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 4, tempy, tempx + 3 * 6, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 6, tempy, tempx + 3 * 10, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 10, tempy, tempx + 3 * 15, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 17, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 17, tempy, tempx + 3 * 22, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 22, tempy, tempx + 3 * 23, tempy + 3, 0x000000);
	//27th
	tempx = x + 3 * 6;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 1, tempy, tempx + 3 * 2, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 2, tempy, tempx + 3 * 8, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 8, tempy, tempx + 3 * 10, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 10, tempy, tempx + 3 * 15, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 17, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 17, tempy, tempx + 3 * 23, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 23, tempy, tempx + 3 * 24, tempy + 3, 0x000000);
	//28th
	tempx = x + 3 * 6;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3 * 2, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 2, tempy, tempx + 3 * 7, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 9, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 9, tempy, tempx + 3 * 15, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 15, tempy, tempx + 3 * 17, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 17, tempy, tempx + 3 * 23, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 23, tempy, tempx + 3 * 24, tempy + 3, 0x000000);
	//29th
	tempx = x + 3 * 6;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3 * 2, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 2, tempy, tempx + 3 * 7, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 7, tempy, tempx + 3 * 8, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 8, tempy, tempx + 3 * 9, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 9, tempy, tempx + 3 * 10, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 10, tempy, tempx + 3 * 16, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 16, tempy, tempx + 3 * 18, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 18, tempy, tempx + 3 * 24, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 24, tempy, tempx + 3 * 25, tempy + 3, 0x000000);
	//30th
	tempx = x + 3 * 7;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3 * 8, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 8, tempy, tempx + 3 * 16, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 16, tempy, tempx + 3 * 18, tempy + 3, 0xffffff);
	draw_rect(tempx + 3 * 18, tempy, tempx + 3 * 23, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 23, tempy, tempx + 3 * 24, tempy + 3, 0x000000);
	//31th
	tempx = x + 3 * 11;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3, tempy + 3, 0x000000);
	draw_rect(tempx + 3, tempy, tempx + 3 * 3, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 3, tempy, tempx + 3 * 9, tempy + 3, 0x000000);
	draw_rect(tempx + 3 * 9, tempy, tempx + 3 * 20, tempy + 3, 0xc0c0c0);
	draw_rect(tempx + 3 * 20, tempy, tempx + 3 * 21, tempy + 3, 0x000000);
	//32th
	tempx = x + 3 * 11;
	tempy -= 3;
	draw_rect(tempx, tempy, tempx + 3 * 4, tempy + 3, 0x000000);
	tempx = x + 3 * 20;
	draw_rect(tempx, tempy, tempx + 3 * 13, tempy + 3, 0x000000);
}

void drawgrid(int size)
{
	for (int i = 0; i < render_state.height;)
	{
		draw_rect(i, 0, i + 1, render_state.height, 0x000000);
		i += size;
	}
	for (int i = 0; i < render_state.width;)
	{
		draw_rect(0, i, render_state.width, i + 1, 0x000000);
		i += size;
	}

}