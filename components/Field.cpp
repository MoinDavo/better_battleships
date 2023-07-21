#include "Field.h"
#include "Ship.h"
#include <stdio.h>

Field::Field()
{
	// init fields
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			this->char_field[i][j] = '~';
			this->bool_field[i][j] = false;
			this->ship_field[i][j] = nullptr;
		}
	}
}

bool Field::check_ship_field_empty()
{
	// check in the ships in the field are destroyed or alive
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (!(this->ship_field[i][j]->get_destroyed()))
			{
				return false;
			}
		}
	}
	return true;
}

void Field::place_ship(Ship *s)
{
	this->ship_field[s->get_x()][s->get_y()] = s;
	if (s->get_horizontal())
	{
		for (int i = 0; i < s->get_length(); i++)
		{
			this->ship_field[s->get_x() + i][s->get_y()] = s;
		}
	}
	else
	{
		for (int i = 0; i < s->get_length(); i++)
		{
			this->ship_field[s->get_x()][s->get_y() + i] = s;
		}
	}
}

void Field::print_field()
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			printf("%c", this->char_field[i][j]);
		}
		printf("\n");
	}
}