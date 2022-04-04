﻿#include "FractionLib.h"
#include <iostream>

using namespace std;

int main()
{
	Fraction fr1(3, 1);
	Fraction fr2(5, -2);
	cout << fr2.pow(2) << endl;
	cout << fr1 * fr2 << endl;
	cout << fr1 / fr2 << endl;
	cout << 1 / (3 * fr1 + 4 * fr2) << endl;
	cout << fr1.abs() << endl;
	cout << fr1.inverse() << endl;
	return 0;
}