#include<iostream>
#include<iomanip>
#include"标头.h"
using namespace std;
//double celsius_to_fah(double cel)//摄氏到℉
//{
//	double fah;
//	fah = cel * 1.8 + 32;
//	return fah;
//}
//double fahrenheit_to_cels(double fah)//℉到℃
//{
//	double cel;
//	cel = (fah - 32) / 1.8;
//	return cel;
//}
int main()
{
	double c1 = 40.0;
	double f2 = 120.0;
	cout << "Celsius Fahrenheit | Fahrenheit Celsi" << endl;
	for (double i = 10; i >0; i--)
	{

		cout << fixed << setprecision(1)<< c1 << '\t' <<fixed << setprecision(1)<<celsius_to_fah(c1) << '\t' << "|" << f2 << '\t' << fixed<<setprecision(2) << fahrenheit_to_cels(f2) << endl;
		f2= f2 - 10;
		c1 = c1 - 1;
	}
	return 0;
}