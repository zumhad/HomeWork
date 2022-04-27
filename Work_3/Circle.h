#pragma once

class Circle
{
public:
	Circle() : m_r(0.0) {}
	Circle(double r) : m_r(r) {}

	void SetRadius(double r) { m_r = r; }
	double GetRadius() { return m_r; }

private:
	double m_r;
};

