#include<iostream>
#include<string>
using namespace std;
class cft
{
private:
	double length;
	double width;
	double height;
public:
	
	cft()
	{
	cout << "请依次输入长宽高" << endl;
	cin >> length >> width >> height;
	}
	
	double show_v()
	{
double v = length * width * height;
return v;
	}
};
int main()
{
	cft c1, c2, c3;
	cout << c1.show_v() <<'\t' << c2.show_v()<<'\t' << c3.show_v();
	return 0;
}