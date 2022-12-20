#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b,c,m,n;
	cin >> a >> b;
	m = a;
	n = b;
	c = a % b;
	if (c == 0)
	{
		cout << "两数的最大公约数为" << b << endl;
		cout << "两数的最小公倍数为" << a * b / b << endl;
	}
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
		if (c == 0)
		{
			cout << "两数的最大公约数为" << b << endl;
			cout << "两数的最小公倍数为" << m* n/ b << endl;
		}
}

	return 0;
}