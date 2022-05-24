#include <gtest/gtest.h>
#include "Plateau.h"
#include "rover.cpp"

namespace {
TEST(Rover, TurnLeft) {
    Rover rover;
    rover.TurnLeft();
    EXPECT_EQ(Cardinals::West, rover.cardinal_orientation);
}

TEST(Rover, TurnRight) {
    Rover rover;
    rover.TurnRight();
    EXPECT_EQ(Cardinals::East, rover.cardinal_orientation);
}

TEST(Rover, MoveForwardNoth){
    Rover rover;
    rover.MoveForward();
    EXPECT_EQ(1, rover.axisY);
}

TEST(Rover, MoveForwardEast){
    Rover rover;
    rover.TurnRight();
    rover.MoveForward();
    EXPECT_EQ(1, rover.axisX);
}

TEST(Rover, ExpectedOutput1)
{
    Rover rover;
    rover.axisX = 1;
    rover.axisY = 2;
    rover.cardinal_orientation = North;
    rover.ExecuteOrders("LMLMLMLMM");
    EXPECT_EQ(1, rover.axisX);
    EXPECT_EQ(3, rover.axisY);
    EXPECT_EQ(North, rover.cardinal_orientation);
}

TEST(Rover, ExpectedOutput2)
{
    Rover rover;
    rover.axisX = 3;
    rover.axisY = 3;
    rover.cardinal_orientation = East;
    rover.ExecuteOrders("MMRMMRMRRM");
    EXPECT_EQ(5, rover.axisX);
    EXPECT_EQ(1, rover.axisY);
    EXPECT_EQ(East, rover.cardinal_orientation);
}

}
