#include<iostream>
#include<string>
using namespace std;
int main()
{
	double x, y;
	char op;
	cout << "����������: ";
	cin >> x >> y;
	cout << "�����������+��-��*��/ ��%: ";
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
			cout << "���ʽ���Ϸ�" << endl;
			break;
		}
		else
			cout << x / y;
		break;
	case'%':
		cout << (int)x % (int)y;
		break;
	default:
		cout << "Error!  ��������ȷ�������";
		break;
	}
	return 0;
}