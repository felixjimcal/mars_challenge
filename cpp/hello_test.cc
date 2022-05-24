#include "Plateau.h"
#include "rover.cpp"
#include <gtest/gtest.h>

namespace {
TEST(Rover, TurnLeft) {
  plateau.topX = 5;
  plateau.topY = 5;

  Rover rover;
  rover.TurnLeft();
  EXPECT_EQ(Cardinals::West, rover.cardinal_orientation);
}

TEST(Rover, TurnRight) {
  plateau.topX = 5;
  plateau.topY = 5;

  Rover rover;
  rover.TurnRight();
  EXPECT_EQ(Cardinals::East, rover.cardinal_orientation);
}

TEST(Rover, MoveForwardNoth) {
  plateau.topX = 5;
  plateau.topY = 5;

  Rover rover;
  rover.MoveForward();
  EXPECT_EQ(1, rover.axisY);
}

TEST(Rover, MoveForwardEast) {
  plateau.topX = 5;
  plateau.topY = 5;

  Rover rover;
  rover.TurnRight();
  rover.MoveForward();
  EXPECT_EQ(1, rover.axisX);
}

TEST(Rover, TouchingEdgeX) {
  plateau.topX = 5;
  plateau.topY = 5;

  Rover rover;
  rover.TurnLeft();
  rover.MoveForward();
  EXPECT_EQ(0, rover.axisX);
}

TEST(Rover, TouchingEdgeY) {
  plateau.topX = 5;
  plateau.topY = 5;

  Rover rover;
  rover.TurnRight();
  rover.TurnRight();
  rover.MoveForward();
  EXPECT_EQ(0, rover.axisY);
}

TEST(Rover, TouchingEdgeXTop) {
  plateau.topX = 1;

  Rover rover;
  rover.axisX = 1;
  rover.cardinal_orientation = East;
  rover.MoveForward();
  EXPECT_EQ(1, rover.axisX);
}

TEST(Rover, TouchingEdgeYTop) {
  plateau.topY = 1;

  Rover rover;
  rover.axisY = 1;
  rover.MoveForward();
  EXPECT_EQ(1, rover.axisY);
}

TEST(Rover, ExpectedOutput1) {
  plateau.topX = 5;
  plateau.topY = 5;

  Rover rover;
  rover.axisX = 1;
  rover.axisY = 2;
  rover.cardinal_orientation = North;
  rover.ExecuteOrders("LMLMLMLMM");
  EXPECT_EQ(1, rover.axisX);
  EXPECT_EQ(3, rover.axisY);
  EXPECT_EQ(North, rover.cardinal_orientation);
}

TEST(Rover, ExpectedOutput2) {
  plateau.topX = 5;
  plateau.topY = 5;

  Rover rover;
  rover.axisX = 3;
  rover.axisY = 3;
  rover.cardinal_orientation = East;
  rover.ExecuteOrders("MMRMMRMRRM");
  EXPECT_EQ(5, rover.axisX);
  EXPECT_EQ(1, rover.axisY);
  EXPECT_EQ(East, rover.cardinal_orientation);
}

} // namespace
