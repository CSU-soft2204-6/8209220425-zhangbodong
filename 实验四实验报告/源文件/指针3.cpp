#include<iostream>
using namespace std;
void arrange(int p[], int n);
int main()
{
	int n;
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >>* (p+i);
	}
	arrange(p,n);
	for (int b = 0; b < n; b++)
	{
		cout << *(p + b) << " ";
	}
	delete []p;
	return 0;
}
void arrange(int p[], int n)
{
	int temp;
	for (int t = 0; t < n; t++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}