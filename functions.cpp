#define _USE_MATH_DEFINES

#include <iostream>
#include "functions.h"
#include <cmath>

using namespace std;
float a(float x, float y, float z)
{
	if(y == 0)
	{
		cout << "Division by zero!\n";
	}
	if ((x + y) == 0)
	{
		cout << "Division by zero!\n";
	}
	return -4 * z * (cbrt(sqrt(x + y) / pow(y, 2)) - fabs(3 * y + 5 * (pow(x, -1)))) + pow(M_E, 3);

}

float b(float x, float y, float z)
{
	float a = 0;
	if (x == 0)
	{
		cout << "Division by zero!\n";
	}
	a = ::a(x, y, z);
	if ((pow(x, 2) + a - pow(y, 2) * pow(sin(x + z), 3)) < 0)
	{
		cout << "Square root of negative number!\n";
	}

	return sqrt((pow(x, 2) + a - pow(y, 2) * pow(sin(x + z), 3)) / x) + sin(27 / 180 * M_PI);
}

int digitCount(long long val)
{
	val = std::abs(val);           
	if (val == 0) return 1;      
	return static_cast<int>(floor(log10(val))) + 1;
}
