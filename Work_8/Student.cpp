#include "Student.h"

std::ostream& operator<<(std::ostream& os, const Student& s)
{
	return os << s.name;
}

std::istream& operator>>(std::istream& in, Student& s)
{
	return in >> s.name;
}