#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,x0,x1;
	cin >> a;
	x0 = a;
	x1 = (x0 + a / x0) / 2;
	while (fabs(x1 - x0) >= 1e-5)
	{
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	}
	cout << x0 << endl;
	return 0;
}