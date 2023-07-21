#pragma once
/**
 * Class to store the relevant data for a Battleship
 */
class Ship
{
private:
    int x_pos;       // x-position of the ship
    int y_pos;       // y-position of the ship
    int length;      // length of the ship
    bool horizontal; // wether the ship is horizontal or vertical
    int remaining;   // remaining parts of the ship that havn't been hit
    int destroyed;   // wether the ship is destroyed or is still alive

    void check_if_destroyed();

public:
    Ship(int, int, int, bool);
    ~Ship();

    Ship *get_ship();
    int get_x();
    int get_y();
    int get_length();
    bool get_horizontal();
    int get_remaining();
    bool get_destroyed();

    void decrement_remaining();
};