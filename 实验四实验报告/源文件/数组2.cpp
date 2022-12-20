#include<iostream>
using namespace std;
int main()
{
	double arr[10];
	for (int i = 0; i <= 9; i++)
	{
		cin >> arr[i];
	}
	//double  arr[10] = { 1,5,6,3,2,7,8,9,5,4 };
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] >=arr[i + 1])
		{
			arr[i + 1] = arr[i];
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}