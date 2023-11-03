#include "Game.h"
#define is_down(b) input->buttons[b].is_down
#define pressed(b) (input->buttons[b].is_down && input->buttons[b].changed)
#define released(b) (!input->buttons[b].is_down && input->buttons[b].changed)
float player_pos_x = 450.f;
float player_pos_y = 450.f;
void simulate_game(Input* input)
{
	//clear_screen(0x98D0B9);
	if (pressed(BUTTON_UP))
		player_pos_y += 4.f;
	if (pressed(BUTTON_DOWN))
		player_pos_y-= 4.f;
	if (pressed(BUTTON_LEFT))
		player_pos_x -= 4.f;
	if (pressed(BUTTON_RIGHT))
		player_pos_x += 4.f;

	draw_ghost(player_pos_x, player_pos_y);
}
