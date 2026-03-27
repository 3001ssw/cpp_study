#include "pch.h"
#include <random>
#include "../Project1/MathClass.h"
#include "Macros.h"
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
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(
		(std::numeric_limits<int>::min)(),
		(std::numeric_limits<int>::max)());

	for (int i = 0; i < 1000000; ++i)
	{
		int a = dis(gen);
		int b = dis(gen) % 100;
		//EXPECT_EXIT({
		//	MathClass::Division(a, b);
		//	exit(0);
		//	},
		//	::testing::ExitedWithCode(0), "");
		bool bRes = EXPECT_NO_CRASH(MathClass::Division(a, b));
		if (bRes)
			break;
	}
}