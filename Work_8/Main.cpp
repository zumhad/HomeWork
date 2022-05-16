#include "Student.h"

#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;



void list(vector<Student*>& v)
{
	system("cls");

	for (int i = 0; i < v.size(); i++)
	{
		cout << i+1 << ". " << *v[i] << endl;
	}

	system("pause");
}

void add(vector<Student*>& v)
{
	system("cls");

	Student* s = new Student;
	cout << "Студент: ";
	cin >> *s;

	v.push_back(s);
}

void del(vector<Student*>& v)
{
	system("cls");

	if (v.size() == 0) return;

	int id = 0;
	while(id <= 0 || id > v.size())
	{
		cout << "Номер: ";
		cin >> id;
	}

	v.erase(v.begin() + id - 1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<Student*> v;

	int answer = 0;
	while (answer != 4)
	{
		system("cls");

		cout << "Картотека" << endl << endl;
		cout << "1. Студенты" << endl;
		cout << "2. Добавить студента" << endl;
		cout << "3. Удалить студента" << endl;
		cout << "4. Выход" << endl << endl;

		do
		{
			cout << "Выбор: ";
			cin >> answer;
		} while (answer < 1 || answer > 4);

		switch (answer)
		{
		case 1: { list(v); break; }
		case 2: { add(v); break; }
		case 3: { del(v); break; }
		}
	}


	for (int i = 0; i < v.size(); i++)
	{
		delete v[i];
	}

	return 0;
}