#pragma once
class Student
{
public:
	void display();
	void set_value()
	{
		std::cin >> num >> name >> sex;
	}
private:
	int num;
	char name[20];
	char sex;
};