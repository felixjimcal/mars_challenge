#include "rover.h"

void Rover::TurnLeft()
{
    cardinal_orientation = static_cast<Cardinals>((cardinal_orientation +3) % NUM_DRAW_MODES);
}

void Rover::TurnRight()
{
    cardinal_orientation = static_cast<Cardinals>((cardinal_orientation +3) % NUM_DRAW_MODES);
}
