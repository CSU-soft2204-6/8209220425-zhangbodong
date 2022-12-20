#include <iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << sizeof(short) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;
	cout << sizeof(wchar_t) << endl;
	return 0;
}