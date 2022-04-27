#include <iostream>
#include <ctime>
using namespace std;

#define SIZE 10

void reverse(int* arr)
{
	cout << "reverse(arr)" << endl;
	int temp[SIZE];

	for (int i = 0; i < 10; i++)
		temp[i] = arr[i];

	for (int i = 0; i < 10; i++) 
		arr[i] = temp[SIZE - i - 1];
}

void sort(int* arr)
{
	cout << "sort(arr)" << endl;

	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 9; j++) 
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void sort_reverse(int* arr)
{
	cout << "sort_reverse(arr)" << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void (*check(int* arr))(int*)
{
	void (*result)(int*) = 0;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += arr[i];

	if (sum == arr[0]) result = reverse;
	if (sum > arr[0]) result = sort;
	if (sum < arr[0]) result = sort_reverse;

	return result;
}

int main()
{
	srand(time(0));

	int* arr = new int[SIZE];

	cout << "arr:";
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = (rand() % (SIZE*2 - 1)) - (SIZE - 1); // от -9 до +9 если size = 10
		cout << " " << arr[i];
	}
	cout << endl;

	void (*call)(int*) = check(arr);
	call(arr);

	cout << "arr:";
	for (int i = 0; i < SIZE; i++)
		cout << " " << arr[i];
	cout << endl;

	delete[] arr;
	return 0;
}