#include <string>
#include <iostream>
using namespace std;
int main()
{
	string string1 = "ABCDEFGHI";
	const char* c_str1 = NULL;
	int length = string1.length() + 1;
	char* c_str2 = new char[length];
	string1.copy(c_str2, length, 0);
	c_str2[length] = '\0';            
	c_str1 = string1.data();
	cout << "string1=" << string1.c_str() << endl;
	cout << "c_str1=";
	for (int i = 0; i < length; i++)
		cout << c_str1[i];
	cout << endl << "c_str2=" << c_str2 << endl;
	return 0;
};