#include <iostream>
#include <ctime>
using namespace std;

void sort(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void sort(double* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	srand(time(0));

	const int size = 10;
	int arr1[size];

	cout << "arr:";
	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % size;
		cout << " " << arr1[i];
	}
	cout << endl;

	sort(arr1, size);
	cout << "sort_arr:";
	for (int i = 0; i < size; i++)
		cout << " " << arr1[i];
	cout << endl << endl;

	/////////////////////////////////////

	double arr2[size];

	cout << "arr:";
	for (int i = 0; i < size; i++)
	{
		arr2[i] = (rand() % (size*10))/10.0;
		cout << " " << arr2[i];
	}
	cout << endl;

	sort(arr2, size);
	cout << "sort_arr:";
	for (int i = 0; i < size; i++)
		cout << " " << arr2[i];
	cout << endl << endl;

	system("pause");
	return 0;
}