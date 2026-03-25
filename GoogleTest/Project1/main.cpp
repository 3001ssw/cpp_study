#pragma once
#include <iostream>
#include "MathClass.h"

using namespace std;


int main()
{
	int sum = MathClass::Sum(1, 2);

	cout << "sum result : " << sum << endl;

	return 0;
}