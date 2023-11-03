#pragma once
#include <iostream>
#include <Windows.h>;
using namespace std;
void render_background();
void clear_screen(unsigned int color);
void draw_rect(int x0, int y0, int width, int length, int color);
void draw_bat(int x, int y, int size);
void draw_dragon(int x, int y, int size);
void draw_penguin(int x, int y, int size);
void draw_car(int x, int y, int size);
void draw_headtrain(int x, int y, int size);
void drawTurtel(int x, int y);
void draw_ghost(int x, int y);
void drawgrid(int size);
