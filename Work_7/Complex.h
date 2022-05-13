#pragma once

#include <iostream>
using namespace std;


class Complex
{
public:
	Complex(double re = 0.0, double im = 0.0) : m_re(re), m_im(im) { cout << "complex: constructor" << endl; }
	~Complex() { cout << "complex: destructor" << endl; }
	Complex(const Complex& complex)
	{
		m_re = complex.m_re;
		m_im = complex.m_im;
		cout << "complex: copy constuctor" << endl;
	}

	void Set(double re, double im) { m_re = re; m_im = im; }
	double GetRe() { return m_re; }
	double GetIm() { return m_im; }

	friend Complex operator+ (const Complex& c1, const Complex& c2);
	friend Complex operator- (const Complex& c1, const Complex& c2);
	friend Complex operator* (const Complex& c1, const Complex& c2);
	friend Complex operator/ (const Complex& c1, const Complex& c2);

private:
	double m_re, m_im;
};

Complex operator+ (const Complex& c1, const Complex& c2);
Complex operator- (const Complex& c1, const Complex& c2);
Complex operator* (const Complex& c1, const Complex& c2);
Complex operator/ (const Complex& c1, const Complex& c2);

