#pragma once
#include "Ship.h"
/**
 * Class to store the game fields.
 * There are 3 Fields:
 * 1. to store a reference to the ships (Ship)
 * 2. to store where a player has shot (bool)
 * 3. to store the player will see (char)
 */
class Field
{
private:
    Ship *ship_field[16][16]; // stores the placed ships
    bool bool_field[16][16];  // stores where the player has "shot"
    char char_field[16][16];  // stores the chars the player sees

    bool check_ship_field_empty(); // checks if the ship_field is empty (game end criteria)
    bool check_shot(int, int);     // return if a valid shot was placed
    void calc_shot(int, int);       // calculate the shot's impact
    void change_char_field();

public:
    Field(/* args */);
    //~Field();

    void place_ship(Ship *);
    void print_field();
};