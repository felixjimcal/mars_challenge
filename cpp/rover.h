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
    Cardinals cardinal_orientation = Cardinals::North;
    void TurnLeft();
    void TurnRight();
};

#endif // ROVER_H
;
