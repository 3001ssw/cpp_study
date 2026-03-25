#pragma once
#include <iostream>

using namespace std;

class MathClass
{
public:
	MathClass()
	{

	}

	static int Sum(int a, int b)
	{
		int sum = a + b;

		cout << a << " + " << b << " = " << sum << endl;

		return sum;
	}

	static int Division(int a, int b)
	{
		int mod = a / b;

		//cout << a << " / " << b << " = " << mod << endl;

		return mod;
	}

};

