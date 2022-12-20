#include<iostream>
#include<string>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if ('a' <= ch && ch <= 'z')
	{
		ch = ch - 32;
		cout << ch << endl;
	}
	else
	{
		ch = ch + 1;
		cout << ch << endl;
	}
	return 0;
}