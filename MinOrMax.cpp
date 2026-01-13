#include <iostream>
using namespace std;

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int max = arr[0]; 
	int min = arr[0];

	const int size = 5;

	for (int i = 1; i < size; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}

		if (arr[i]>max)
		{
			max = arr[i];
		}

	}

	cout <<"Min number in the array is: "<< min << endl;
	cout << "Max number in the array is: "<< max << endl;
}