#include<iostream>
#include<string>
using namespace std;
int main()
{
	double x, y;
	char op;
	cout << "输入两个数: ";
	cin >> x >> y;
	cout << "输入运算符：+、-、*、/ 、%: ";
	cin >> op;
	switch (op)
	{
	case'+':
		cout << x + y;
		break;
	case '-':
		cout << x - y;
		break;
	case '*':
		cout << x * y;
		break;
	case'/':
		if (y == 0)
		{
			cout << "表达式不合法" << endl;
			break;
		}
		else
			cout << x / y;
		break;
	case'%':
		cout << (int)x % (int)y;
		break;
	default:
		cout << "Error!  请输入正确运算符。";
		break;
	}
	return 0;
}