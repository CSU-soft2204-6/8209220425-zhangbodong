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
		cout << "���������Լ��Ϊ" << b << endl;
		cout << "��������С������Ϊ" << a * b / b << endl;
	}
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
		if (c == 0)
		{
			cout << "���������Լ��Ϊ" << b << endl;
			cout << "��������С������Ϊ" << m* n/ b << endl;
		}
}

	return 0;
}