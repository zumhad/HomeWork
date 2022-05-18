#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	Human(string sn = "", string n = "", string mn = "", int a = 0) : surname(sn), name(n), midname(mn), age(a) { cout << "Create class..." << endl; };
	~Human() { cout << "Destroy class..." << endl; };

	void virtual Print() = 0;

protected:
	string surname;
	string name;
	string midname;
	int age;
};

class Student : public Human
{
public:
	Student(string sn = "", string n = "", string mn = "", int a = 0, bool ol = false) : Human(sn, n, mn, a), on_lesson(ol) {}

	void Print() override 
	{ 
		cout << "surname: " << surname << endl;
		cout << "name: " << name << endl;
		cout << "midname: " << midname << endl;
		cout << "age: " << age << endl;
		cout << "on_lesson: " << on_lesson << endl << endl;
	}

private:
	bool on_lesson;
};

class Boss : public Human
{
public:
	Boss(string sn = "", string n = "", string mn = "", int a = 0, int now = 0) : Human(sn, n, mn, a), number_of_workers(now) {}

	void Print() override
	{
		cout << "surname: " << surname << endl;
		cout << "name: " << name << endl;
		cout << "midname: " << midname << endl;
		cout << "age: " << age << endl;
		cout << "number_of_workers: " << number_of_workers << endl << endl;
	}

private:
	int number_of_workers;
};

void foo()
{
	Student s;
	s.Print();

	Boss b("kirill", "chukunov", "dmitrievich", 18, false);
	b.Print();
}

int main()
{
	foo();

	system("pause");
	return 0;
}