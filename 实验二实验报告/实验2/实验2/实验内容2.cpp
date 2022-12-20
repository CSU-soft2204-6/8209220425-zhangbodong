#include<iostream>
#include<string>
using namespace std;
int main()
{
	double x,y;
	cin >> x;
	if (x < 1 && x>0)
	{
		y = 3 - 2 * x;
		cout << y << endl;
	}
	else if(x<5&&x>=1)
	{
		y = 2 / (4 * x) + 1;
		cout << y << endl;
	}
	else if (x < 10 && x >= 5)
	{
		y = x * x;
		cout << y<< endl;
	}
	return 0;
}