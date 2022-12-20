#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i <size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i <size2; i++)
	{
		list3[size1 + i] = list2[i];
	}
	for (int b = 0; b < size1 + size2-1; b++)//Ã°ÅÝÅÅÐò
	{
		for (int i = 0; i < (size1 + size2 - 1); i++)
		{
			if (list3[i] >= list3[i + 1])
			{
				int t = 0;
				t = list3[i];
				list3[i] = list3[i + 1];
				list3[i + 1] = t;
			}
		}
	}
	for (int i = 0; i <( size1 + size2); i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int size1, size2, size3;
	cout << "enter size1: ";
	cin >> size1;
	cout << "enter list1: ";
	int list1[80];
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "enter size2: ";
	cin >> size2;
	cout << "enter list2: ";
	int list2[80];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	size3 = size1 + size2;
	int list3[80];
	merge(list1, size1, list2, size2, list3);

	cout << endl;
	return 0;
}
