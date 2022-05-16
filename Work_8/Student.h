#pragma once

#include <iostream>
#include <string>

class Student
{
public:
	Student& operator=(const Student& s) { this->name = s.name; }
	friend std::ostream& operator<<(std::ostream& os, const Student& s);
	friend std::istream& operator>>(std::istream& in, Student& s);
private:
	std::string name = "";
};

