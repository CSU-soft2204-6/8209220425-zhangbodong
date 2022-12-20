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
//这程序挺离谱的，随便改的，全凭感觉还能改对