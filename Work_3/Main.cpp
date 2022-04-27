#include "Complex.h"
#include "Vector.h"
#include "Circle.h"

#include <iostream>
using namespace std;


int main()
{
	Complex complex = { 5, -2.0 };
	cout << complex.GetRe() << " " << complex.GetIm() << endl;

	Vector vector = { 23, -1 };
	cout << vector.GetX() << " " << vector.GetY() << endl;

	Circle circle = { 25.5 };
	cout << circle.GetRadius() << endl;

	system("pause");
	return 0;
}