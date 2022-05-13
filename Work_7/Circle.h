#pragma once

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;

class Circle
{
public:
	Circle(double r = 0.0) : m_r(r) { cout << "circle: constructor" << endl; }
	~Circle() { cout << "circle: destructor" << endl; }
	Circle(const Circle& circle)
	{
		cout << "circle: copy constructor" << endl;
		this->m_r = circle.m_r;
	}

	void SetRadius(double r) { m_r = r; }
	double GetRadius() { return m_r; }
	double GetLenght() { return 2.0 * M_PI * m_r; }
	double GetSquare() { return M_PI * m_r * m_r; }

private:
	double m_r;
};

