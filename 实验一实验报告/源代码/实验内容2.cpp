#include<iostream>
using namespace std;
#define pi 3.1415926
int main()
{
	double r, h,v;
	cin >> r >> h;
	v = pi * r * r * h /3;
	cout << v << endl;
	return 0;
}