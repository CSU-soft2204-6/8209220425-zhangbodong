#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n = 1;
	for (int i = 0; i <9; i++)
	{
		n = n + 1;
		n = n * 2;
	}
	cout << n << endl;
	return 0;
}