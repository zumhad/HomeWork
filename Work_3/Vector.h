#pragma once

#include<cmath>

class Vector
{
public:
	Vector() : m_x(0.0), m_y(0.0) {}
	Vector(double x, double y) : m_x(x), m_y(y) {}

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

