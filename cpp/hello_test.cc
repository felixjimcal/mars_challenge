#include <gtest/gtest.h>
#include "simplemath.cpp"
#include "Plateau.h"

namespace {
// Demonstrate some basic assertions.
TEST(Plateau, CreatingPalteau) {

    plateau.topX = 9;
    plateau.topX = 9;

    EXPECT_EQ(9, plateau.topX);
}
}
