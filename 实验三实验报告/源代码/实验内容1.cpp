//#include<iostream>
//using namespace std;
//void t(int a, int b)
//{
//	int m = a;
//	int n = b;
//	if (a % b == 0)
//	{
//		cout << "最大公约数为" << b << endl;
//	}
//	while (a % b != 0)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//		if (c == 0)
//		{
//			cout << "最大公约数为" << b << endl;
//		}
//	}
//	
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	t(a, b);
//	return 0;
//
//}
#include <iostream>
using namespace std;
//求最大公约数
int gcd(int m, int n)
{
	int k = 1;
	int i = 1;
	while (i <= m && i <= n)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
		i++;
	}
	return k;
}
//求最小公倍数
int lcm(int m, int n)
{
	int k = 1;
	for (int i = 2; i <= m && i <= n; i++)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
	}
	int h;
	h = m * n / k;
	return h;
}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m, i;
//	cin >> n >> m;
//	i = max(n, m);
//	while (1)
//	{
//		if (i % n == 0 && i % m == 0)break;
//		i++;                //硬核自加
//	}
//	cout << i << endl;
//}

int main()
{
	cout << "Please enter two nums : " << endl;
	int m, n;
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	cout << m << " and " << n << " greatest common divisor gcd :  " << gcd(m, n) << endl;
	cout << m << " and " << n << " lowest common multiple LCM : " << lcm(m, n) << endl;

	return 0;
}