#include <gb/gb.h>
#include <stdint.h>
#include "../res/snake.h"

void main(void)
{
    set_sprite_data(0, 3, Snake);
    set_sprite_tile(0, 0);
    set_sprite_tile(1, 1);
    set_sprite_tile(2, 1);
    set_sprite_tile(3, 1);
    set_sprite_tile(4, 1);
    set_sprite_tile(5, 1);
    set_sprite_tile(6, 2);
    move_sprite(0, 84, 80);
    move_sprite(1, 84, 88);
    move_sprite(2, 84, 96);
    move_sprite(3, 84, 104);
    move_sprite(4, 84, 112);
    move_sprite(5, 84, 120);
    move_sprite(6, 84, 128);
    SHOW_SPRITES;
}
