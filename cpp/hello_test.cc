#include "Plateau.h"
#include "rover.cpp"
#include <gtest/gtest.h>

struct RoverTest : testing::Test{
    Rover rover;

    RoverTest(){
        plateau.topX = 5;
        plateau.topY = 5;
    }
};

namespace {

TEST_F(RoverTest, TurnLeft){
    rover.TurnLeft();
    EXPECT_EQ(Cardinals::West, rover.cardinal_orientation);
}

TEST_F(RoverTest, TurnRight) {
  rover.TurnRight();
  EXPECT_EQ(Cardinals::East, rover.cardinal_orientation);
}

TEST_F(RoverTest, MoveForwardNoth) {
  rover.MoveForward();
  EXPECT_EQ(1, rover.axisY);
}

TEST_F(RoverTest, MoveForwardEast) {
  rover.TurnRight();
  rover.MoveForward();
  EXPECT_EQ(1, rover.axisX);
}

TEST_F(RoverTest, TouchingEdgeX) {
  rover.TurnLeft();
  rover.MoveForward();
  EXPECT_EQ(0, rover.axisX);
}

TEST_F(RoverTest, TouchingEdgeY) {
  rover.TurnRight();
  rover.TurnRight();
  rover.MoveForward();
  EXPECT_EQ(0, rover.axisY);
}

TEST_F(RoverTest, TouchingEdgeXTop) {
  plateau.topX = 1;

  rover.axisX = 1;
  rover.cardinal_orientation = East;
  rover.MoveForward();
  EXPECT_EQ(1, rover.axisX);
}

TEST_F(RoverTest, TouchingEdgeYTop) {
  plateau.topY = 1;

  rover.axisY = 1;
  rover.MoveForward();
  EXPECT_EQ(1, rover.axisY);
}

TEST_F(RoverTest, ExpectedOutput1) {
  rover.axisX = 1;
  rover.axisY = 2;
  rover.cardinal_orientation = North;
  rover.ExecuteOrders("LMLMLMLMM");

  EXPECT_EQ(1, rover.axisX);
  EXPECT_EQ(3, rover.axisY);
  EXPECT_EQ(North, rover.cardinal_orientation);
}

TEST_F(RoverTest, ExpectedOutput2) {
  rover.axisX = 3;
  rover.axisY = 3;
  rover.cardinal_orientation = East;
  rover.ExecuteOrders("MMRMMRMRRM");

  EXPECT_EQ(5, rover.axisX);
  EXPECT_EQ(1, rover.axisY);
  EXPECT_EQ(East, rover.cardinal_orientation);
}

} // namespace
