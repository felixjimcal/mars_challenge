#include <gtest/gtest.h>
#include "Plateau.h"
#include "rover.cpp"

namespace {
// Demonstrate some basic assertions.
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


}
