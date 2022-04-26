#include "Complex.h"

std::ostream& operator<< (std::ostream& out, const Complex& c)
{
	if (c.m_re == 0)
	{
		if (c.m_im > 0) out << c.m_im << "i";
		else if (c.m_im < 0) out << c.m_im << "i";
		else out << c.m_re;
	}
	else
	{
		if (c.m_im > 0) out << c.m_re << " + " << c.m_im << "i";
		else if (c.m_im < 0) out << c.m_re << " - " << -c.m_im << "i";
		else out << c.m_re;
	}


	return out;
}

Complex operator+ (const Complex& c1, const Complex& c2)
{
	Complex res(c1.m_re + c2.m_re, c1.m_im + c2.m_im);
	return res;
}

Complex operator- (const Complex& c1, const Complex& c2)
{
	Complex res(c1.m_re - c2.m_re, c1.m_im - c2.m_im);
	return res;
}

Complex operator* (const Complex& c1, const Complex& c2)
{
	Complex res(c1.m_re * c2.m_re - (c1.m_im * c2.m_im), c1.m_re * c2.m_im + c1.m_im * c2.m_re);
	return res;
}

Complex operator/ (const Complex& c1, const Complex& c2)
{
	double z = (c2.m_re * c2.m_re) + (c2.m_im * c2.m_im);
	double re = (c1.m_re * c2.m_re + c1.m_im * c2.m_im) / z;
	double im = (c2.m_re * c1.m_im - c1.m_re * c2.m_im) / z;

	Complex res(re, im);
	return res;
}