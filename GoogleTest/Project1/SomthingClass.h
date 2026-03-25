#pragma once
#include <iostream>

using namespace std;

class SomethingClass
{
public:
	SomethingClass()
	{

	}

	static void DoPrint(int a, int b)
	{
		cout << a << ", " << b << endl;
		int c = a / b;
	}
};