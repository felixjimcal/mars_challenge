#ifndef ROVER_H
#define ROVER_H
#include <iostream>

enum Cardinals {
    North,
    East,
    South,
    West,
    NUM_DRAW_MODES
};

class Rover
{
public:
    int axisY = 0, axisX = 0;
    Cardinals cardinal_orientation = Cardinals::North;
    void TurnLeft();
    void TurnRight();
    void MoveForward();
    void ExecuteOrders(std::string orders);
};

#endif // ROVER_H
;
