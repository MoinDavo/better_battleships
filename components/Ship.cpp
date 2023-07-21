#include "Ship.h"

Ship::Ship(int x, int y, int len, bool horizontal) : x_pos(x), y_pos(y), length(len), horizontal(horizontal) {}

void Ship::check_if_destroyed()
{
    if (this->remaining <= 0)
        this->destroyed = true;
}

// --- getter (/ setter) ---
Ship *Ship::get_ship() { return this; }
int Ship::get_x() { return this->x_pos; }
int Ship::get_y() { return this->y_pos; }
int Ship::get_length() { return this->length; }
bool Ship::get_horizontal() { return this->horizontal; }
int Ship::get_remaining() { return this->remaining; }
bool Ship::get_destroyed() { return this->destroyed; }

void Ship::decrement_remaining()
{
    this->remaining--;
    this->check_if_destroyed();
}