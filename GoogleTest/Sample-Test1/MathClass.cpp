#include "pch.h"
#include "../Project1/MathClass.h"

TEST(MathClassTest, BasicSum)
{
    EXPECT_EQ(15, MathClass::Sum(7, 8));
}

TEST(MathClassTest, RandomSum)
{
    for (int i = 0; i < 100; ++i)
    {
        int a = rand() % 100;
        int b = rand() % 100;
        EXPECT_EQ(a + b, MathClass::Sum(a, b));
    }
}

TEST(MathClassTest, RandomMod)
{
    for (int i = 0; i < 100; ++i)
    {
        int a = rand() % 100;
        int b = rand() % 100;
        EXPECT_DEATH(
            {
                MathClass::Mod(a, b);
            }, "");
    }
}