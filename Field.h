#include "Ship.h"
class Field
{
private:
    bool bool_field[16][16]; // stores where the player has "shot"
    char char_field[16][16]; // stores the chars the player sees
    Ship *ship_field[16][16]; // stores the placed ships

    bool check_field_empty(); // checks if the ship field is empty

public:
    Field(/* args */);
    ~Field();

    void place_ship(Ship *);
};

/*
so I'll be needing 3 of these:
1. to store a reference to the ships (Ship)
2. to store where a player has shot (bool)
3. to store the player will see (char)
*/