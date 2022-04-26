#include "Complex.h"
#include <fstream>
using namespace std;

int main()
{
	ifstream file("complex.txt");

	if (!file.is_open())
	{
		cout << "error" << endl;
		return 0;
	}

	int n; file >> n;

	Complex* p = new Complex[n];

	for (int i = 0; i < n; i++)
	{
		double re, im;
		file >> re; file >> im;
		p[i].Set(re, im);
	}

	Complex* maxP = &(p[0]);
	for (int i = 1; i < n; i++)
	{
		if (p[i].Abs() > maxP->Abs())
			maxP = &(p[i]);
	}

	cout << *maxP << endl;

	delete[] p;

	file.close();
	return 0;
}