#include<iostream>
#include<string>
using namespace std;
int parseHex(const char* const hexString)
{
	int n = strlen(hexString);
	int num = 0;
	for (int i = 0; i < n; i++)
	{

		//cout << hexString[i]<<endl ;
		if (hexString[i] >= '0' && hexString[i] <= '9')
		{
			num = num + (hexString[i] - '0');
		}
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')
		{
			num += (hexString[i] - 'a' + 10);
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			num += (hexString[i] - 'A' + 10);
		}
		if (i < n - 1)
		{
				num = num * 16;
		}
	}
	//cout << n<<endl;
	return num;
}
int main()
{
	int size = 999;
	char s[999];
	cout << "Please enter a number in hexChar : \n";
	//cin.getline(s, size);
	cin >> s;
	//for (int i = 0; i < 1; i++) { cin >> s[i]; }
	cout << "Tne number " << s << " in hexChar is " << parseHex(s) << " in decimal\n";
	return 0;
}//�ַ������ڲ��ֳ�ʼ���󣬺����Ԫ���Զ���ֵΪ��\0��
//(2)�ַ����鶨����main�������棬(int)a[i]��ֵΪ�����������������Ϊ����