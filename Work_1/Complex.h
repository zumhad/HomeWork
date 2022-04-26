#pragma once
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex() : m_re(0.0), m_im(0.0) {}
	Complex(double re, double im) : m_re(re), m_im(im) {}

	friend std::ostream& operator<< (std::ostream& out, const Complex& c);
	friend Complex operator+ (const Complex& c1, const Complex& c2);
	friend Complex operator- (const Complex& c1, const Complex& c2);
	friend Complex operator* (const Complex& c1, const Complex& c2);
	friend Complex operator/ (const Complex& c1, const Complex& c2);

private:
	double m_re, m_im;
};

std::ostream& operator<< (std::ostream& out, const Complex& c);
Complex operator+ (const Complex& c1, const Complex& c2);
Complex operator- (const Complex& c1, const Complex& c2);
Complex operator* (const Complex& c1, const Complex& c2);
Complex operator/ (const Complex& c1, const Complex& c2);

