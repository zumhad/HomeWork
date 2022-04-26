
#include "Complex.h"
using namespace std;

int main()
{
	Complex c1(5, 3);
	Complex c2(0.33, -1);

	cout << c1 + c2 << endl;
	cout << c1 - c2 << endl;
	cout << c1 * c2 << endl;
	cout << c1 / c2 << endl;

	return 0;
}