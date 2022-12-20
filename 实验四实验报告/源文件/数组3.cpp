#include<iostream>
using namespace std;
int main()
{
	int arr[101];
	for (int i = 1; i <= 100; i++)
	{
		arr[i] = 1;
	}
	for (int i = 2; i <= 100; i++)
	{
		for (int j = i; j <= 100; j = j + i)
		{
			arr[j] = 1-(arr[j]);
		}
	}
	for (int i = 1; i <= 100; i++)
	{
		if (arr[i] == 1)
		{
			cout << i  << " ";
		}
	}
	return 0;
}