#include<iostream>

using namespace std;

int main()
{

	const int N = 5;
	int tmp;

	int arr[N]{ 5,7,3,6,4 };

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;


	for (int a = 4; a > 0; a--)
	{
		for (int i = 0; i < N - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
		
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;


	return 0;
}