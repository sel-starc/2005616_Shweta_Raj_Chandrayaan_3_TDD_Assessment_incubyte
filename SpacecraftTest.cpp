#include "Spacecraft.h"
#include <gtest/gtest.h>

TEST(SpacecraftTest, InitialPositionAndDirection) {
    Spacecraft sc(0, 0, 0, 'N');
    EXPECT_EQ(sc.getX(), 0);
    EXPECT_EQ(sc.getY(), 0);
    EXPECT_EQ(sc.getZ(), 0);
    EXPECT_EQ(sc.getDirection(), 'N');
}

TEST(SpacecraftTest, ForwardMovement) {
    Spacecraft sc(0, 0, 0, 'N');
    sc.doCommand('f');
    EXPECT_EQ(sc.getX(), 0);
    EXPECT_EQ(sc.getY(), 1);
    EXPECT_EQ(sc.getZ(), 0);
}

TEST(SpacecraftTest, BackwardMovement) {
    Spacecraft sc(0, 0, 0, 'N');
    sc.doCommand('b');
    EXPECT_EQ(sc.getX(), 0);
    EXPECT_EQ(sc.getY(), -1);
    EXPECT_EQ(sc.getZ(), 0);
}

TEST(SpacecraftTest, LeftTurnFromNorth) {
    Spacecraft sc(0, 0, 0, 'N');
    sc.doCommand('l');
    EXPECT_EQ(sc.getDirection(), 'W');
}

TEST(SpacecraftTest, RightTurnFromNorth) {
    Spacecraft sc(0, 0, 0, 'N');
    sc.doCommand('r');
    EXPECT_EQ(sc.getDirection(), 'E');
}



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



