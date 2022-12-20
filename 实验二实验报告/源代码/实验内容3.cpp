#include<iostream>
#include<string>
using namespace std;
int main()
{
	double b1, b2, b3,c;
	cin >> b1 >> b2 >> b3;
	if (b1 + b2 > b3 && b1 + b3 > b2 && b2 + b3 > b1)
	{
		c = b1 + b2 + b3;
		cout << c << endl;
	}
	else
		cout << "无法构成一个三角形" << endl;
	return 0;
}