#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i, t, k;
	for (int i = 0; i <= 4; i++)
	{
		for (int t = 1; t <=4-i; t++)
		{
			cout << " " ;
		}
		for (k = 0; k < i + 1; k++)
		{
			cout << "*" ;
		}
		cout << endl;
	}
	return 0;
}
//�����ͦ���׵ģ����ĵģ�ȫƾ�о����ܸĶ�