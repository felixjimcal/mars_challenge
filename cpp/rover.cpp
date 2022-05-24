#include "rover.h"

void Rover::TurnLeft()
{
    cardinal_orientation = static_cast<Cardinals>((cardinal_orientation +3) % NUM_DRAW_MODES);
}

void Rover::TurnRight()
{
    cardinal_orientation = static_cast<Cardinals>((cardinal_orientation +1) % NUM_DRAW_MODES);
}

void Rover::MoveForward()
{
    if(cardinal_orientation == North){
        axisY++;
    }
    else if(cardinal_orientation == South){
        axisY--;
    }
    else if(cardinal_orientation == East){
        axisX++;
    }
    else if(cardinal_orientation == West){
        axisX--;
    }
}

void Rover::ExecuteOrders(std::string orders)
{
    for(char& order : orders) {
        if(order == 'L')
        {
            TurnLeft();
        }
        else if(order == 'R')
        {
            TurnRight();
        }
        else if (order == 'M')
        {
            MoveForward();
        }
    }
}
