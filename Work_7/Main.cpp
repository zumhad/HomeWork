#include "Complex.h"
#include "Vector.h"
#include "Circle.h"

#include <iostream>
using namespace std;

void foo()
{
	Complex complex = { 5, -2.0 };
	Complex complex1 = complex;

	Vector vector = { 23, -1 };
	Vector vector1 = vector;

	Circle circle = { 25.5 };
	Circle circle1 = circle;
}


int main()
{
	foo();

	system("pause");
	return 0;
}
