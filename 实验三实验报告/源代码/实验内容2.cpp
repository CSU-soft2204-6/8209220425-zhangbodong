#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
	int n = 0;
	for (int divisor = 2; divisor < num; divisor++)
	{
		if (num % divisor== 0)
		{
			n++;
		}
	}
	if (n == 0)
	{
		//cout << "true";
		return true;
	}
	else
		//cout << "false";
		return false;
}
void number(int t)
{
	const int shuchu = 200;
	const int line = 10;
	int count = 0;
	int number = 2;
	while (count <= t)
	{
		if (is_prime(number))
		{
			count++;
			if (count % line == 0)
			{
				cout << setw(5) << number << endl;
			}
			else
				cout << setw(5) << number;
		}
		number++;
	}
}
int main()
{
	number(200);
	return 0;
}