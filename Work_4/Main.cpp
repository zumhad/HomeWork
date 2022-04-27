#include <iostream>
#include <cmath>
using namespace std;


//2 вариант
int main()
{
	double a = -0.6, b = 5.3, z, t;

	if (a < b)
		z = sqrt(abs(a * a - b * b));
	else
		z = 1.0 - 2.0 * cos(a) * sin(b);

	if (z < b)
		t = cbrt(z + a * a * b);
	else if (z == b)
	{
		if (z <= 0.0 || z == 1.0)
		{
			cout << "error" << endl;
			return 0;
		}

		t = 1.0 - log(z) + cos(a * a * b);
	}
	else
	{
		double temp = cos(z * a);

		if (temp == 0)
		{
			cout << "error" << endl;
			return 0;
		}

		t = 1.0 / temp;
	}

	cout << z << " " << t << endl;

	system("pause");
	return 0;
}