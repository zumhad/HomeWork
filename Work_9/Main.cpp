#include <iostream>
using namespace std;

class Property
{
public:
	Property(double w = 0) : worth(w) {}
	virtual double Calculate() = 0;

protected:
	double worth;
};

class Apartment : public Property
{
public:
	Apartment(double w) : Property(w) {}
	double Calculate() override { return worth / 1000.0; }
};

class Car : public Property
{
public:
	Car(double w) : Property(w) {}
	double Calculate() override { return worth / 200.0; }
};

class CountryHouse : public Property
{
public:
	CountryHouse(double w) : Property(w) {}
	double Calculate() override { return worth / 500.0; }
};

int main()
{
	Property* arr[7];
	arr[0] = new Apartment(5000);
	arr[1] = new Apartment(10000);
	arr[2] = new Apartment(15000);
	arr[3] = new Car(20000);
	arr[4] = new Car(25000);
	arr[5] = new CountryHouse(30000);
	arr[6] = new CountryHouse(35000);

	for (int i = 0; i < 7; i++)
	{
		cout << arr[i]->Calculate() << endl;
	}

	for (int i = 0; i < 7; i++)
	{
		delete arr[i];
	}

	system("pause");
	return 0;
}