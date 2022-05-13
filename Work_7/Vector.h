#pragma once

#include<cmath>
#include <iostream>
using namespace std;


class Vector
{
public:
	Vector(double x = 0.0, double y = 0.0) : m_x(x), m_y(y) { cout << "vector: constructor" << endl; }
	~Vector() { cout << "vector: destructor" << endl; }
	Vector(const Vector& vector)
	{
		m_x = vector.m_x;
		m_y = vector.m_y;
		cout << "vector: copy constuctor" << endl;
	}

	void SetX(double x) { m_x = x; }
	void SetY(double y) { m_y = y; }
	double GetX() { return m_x; }
	double GetY() { return m_y; }

	Vector& Add(Vector& v) { m_x += v.m_x; m_y += v.m_y; return *this; }
	double Dot(Vector& v) { return m_x * v.m_x + m_y * v.m_y; }
	Vector& Scale(double scale) { m_x *= scale; m_y *= scale; return *this; }
	Vector& Normalize() { double len = sqrt(m_x * m_x + m_y * m_y); m_x /= len; m_y /= len; return *this; }

private:
	double m_x, m_y;
};

