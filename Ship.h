class Ship
{
private:
    int x_pos, y_pos, length;
    bool horizontal;
    int remaining;
    int destroyed;

    void check_if_destroyed();

public:
    Ship(int, int, int, bool);
    ~Ship();

    Ship* get_ship();
    int get_x();
    int get_y();
    int get_length();
    bool get_horizontal();
    int get_remaining();
    bool get_destroyed();
    
    void decrement_remaining();


};