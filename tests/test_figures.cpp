#include <gtest/gtest.h>
#include "../include/Rhombus.h"
#include "../include/Pentagon.h"
#include "../include/Hexagon.h"

TEST(RhombusTest, Area) {
    Rhombus r(4, 6, {0, 0});
    EXPECT_DOUBLE_EQ(r.area(), 12.0);
}

TEST(RhombusTest, Equality) {
    Rhombus r1(2, 1, {0, 0});
    Rhombus r2(2, 1, {0, 0});
    Rhombus r3(4, 6, {0, 0});
    EXPECT_TRUE(r1 == r2);
    EXPECT_FALSE(r1 == r3);
}

TEST(PentagonTest, Area) {
    Pentagon p(2, {0, 0});
    double expected = (5 * 2 * 2 * sin(2 * M_PI / 5)) / 2.0;
    EXPECT_NEAR(p.area(), expected, 1e-6);
}

TEST(HexagonTest, Area) {
    Hexagon h(3, {1, 1});
    double expected = (6 * 3 * 3 * sin(2 * M_PI / 6)) / 2.0;
    EXPECT_NEAR(h.area(), expected, 1e-6);
}

TEST(HexagonTest, Equality) {
    Hexagon h1(2, {1, 1});
    Hexagon h2(2, {1, 1});
    Hexagon h3(2, {0, 0});
    EXPECT_TRUE(h1 == h2);
    EXPECT_FALSE(h1 == h3);
}
