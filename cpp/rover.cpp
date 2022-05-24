#include "rover.h"
#include "Plateau.h"

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
    if(cardinal_orientation == North and axisY < plateau.topY){
        axisY++;
    }
    else if(cardinal_orientation == South and axisY > 0){
        axisY--;
    }
    else if(cardinal_orientation == East and axisX < plateau.topX){
        axisX++;
    }
    else if(cardinal_orientation == West and axisX > 0){
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
