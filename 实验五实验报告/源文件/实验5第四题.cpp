#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

class Shape
{
public:
	Shape() {}
	virtual ~Shape() {}

	virtual void  printArea() const = 0;
	virtual double getArea() const = 0;
};

class Circle : public Shape    //Circle
{
public:
	Circle() {}
	Circle(double r) :radius(r) {}

	virtual void  printArea() const;
	virtual double getArea() const
	{
		return 3.14159 * radius * radius;
	}

private:
	double radius;
};

void  Circle::printArea() const
{
	cout << "Circle's area : " << setiosflags(ios::fixed) << setprecision(3) << (3.14159 * radius * radius) << endl;
}

class Rectangle : public Shape    //Rectangle
{
public:
	Rectangle() {}
	Rectangle(double h, double w) :height(h), width(w) {}

	virtual void  printArea() const;
	virtual double getArea() const
	{
		return height * width;
	}

private:
	double height;
	double width;
};

void  Rectangle::printArea() const
{
	cout << "Rectangle's area : " << setiosflags(ios::fixed) << setprecision(3) << height * width << endl;
}

class Triangle : public Shape       //Triangle
{
public:
	Triangle() {}
	Triangle(double a, double b,double c) :bian1(a), bian2(b),bian3(c) {}

	virtual void  printArea() const;
	virtual double getArea() const
	{
		double result = sqrt(p * (p - bian1) * (p - bian2) * (p - bian3));
		return result;
	}

private:
	double bian1;
	double bian2;
	double bian3;
	double p = bian1 + bian2 + bian3;
};

void Triangle::printArea() const
{
	cout << "Triangle's area : " << setiosflags(ios::fixed) << setprecision(3) << sqrt(p * (p - bian1) * (p - bian2) * (p - bian3)) << endl;
}

class Trapezoid : public Shape     //Trapezoid
{
public:
	Trapezoid() {}
	Trapezoid(double t, double b, double h) :top(t), bottom(b), height(h) {}

	virtual void  printArea() const;
	virtual double getArea() const
	{
		return  (top + bottom) * height / 2;
	}


private:
	double top;
	double bottom;
	double height;
};

void  Trapezoid::printArea() const
{
	cout << "Trapezoid's area : " << setiosflags(ios::fixed) << setprecision(3) << (top + bottom) * height / 2 << endl;
}

class Square : public Shape       //Square
{
public:
	Square() {}
	Square(double s) :s_length(s) {}

	virtual void  printArea() const;
	virtual double getArea() const
	{
		return  s_length * s_length;
	}

private:
	double s_length;
};

void Square::printArea() const
{
	cout << "Square 's area : " << setiosflags(ios::fixed) << setprecision(3) << s_length * s_length << endl;
}


int main()
{
	Circle circle(10.2);
	Rectangle rectangle(3,4);
	Triangle triangle(4,5,6);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Square square(3);

	Shape* p[5] = { &circle,&rectangle,&triangle,&trapezoid,&square };
	int i;
	double area;

	for (i = 0; i != 5; ++i)
	{
		p[i]->printArea();
	}

	for (i = 0, area = 0; i != 5; ++i)
	{
		area += p[i]->getArea();
	}

	cout << "总面积为：" << area << endl;

	return 0;
}