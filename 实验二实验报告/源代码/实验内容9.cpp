#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a = 0.8,b,c=0,d=0;
	int t = 2;
	while (t <= 100)
	{
		b = t * a;
		t = t * 2;
		cout << b << endl;
		c = c + b;
		d++;
	}
	cout << "每天平均花："<<c / d << endl;
	return 0;
}