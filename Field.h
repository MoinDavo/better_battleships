class Field
{
private:
    int x_size, y_size;
    
public:
    Field(/* args */);
    ~Field();
};

Field::Field(/* args */)
{
}

Field::~Field()
{
}

/*
so I'll be needing 3 of these:
1. to store a reference to the ships (Ship)
2. to store where a player has shot (bool)
3. to store the player will see (char)
*/