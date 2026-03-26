#include "pch.h"
#include "../Project1/MathClass.h"
#include <random>
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
	for (int i = 0; i < 10000000; ++i)
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<int> dis(
			(std::numeric_limits<int>::min)(),
			(std::numeric_limits<int>::max)());

		int a = dis(gen);
		int b = dis(gen) % 100;
		SCOPED_TRACE(::testing::Message() << "입력값 확인 -> a: " << a << ", b: " << b);
		//EXPECT_EXIT({
		//	MathClass::Division(a, b);
		//	exit(0);
		//	},
		//	::testing::ExitedWithCode(0), "");
		cout << "입력값 확인 -> a: " << a << ", b: " << b << endl;
		MathClass::Division(a, b);
	}
}