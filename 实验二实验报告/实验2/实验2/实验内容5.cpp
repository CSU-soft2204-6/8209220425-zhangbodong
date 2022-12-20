#include<iostream>
#include<string>
using namespace std;
int main()
{
	//当程序调用getchar时，程序就等着用户按键。用户输入的字符被存放在键盘缓冲区输入流中。
	//直到用户按回车为止。当用户键入回车之后，getchar才开始从输入流中每次读入一个字符
	/*注意！
		①使用getchar()时，用户在键盘输入一行的数字，当遇到回车符时，这一行会被存进输入流。
		②如果没有用循环的话，getchar（）每次只能从输入流中读取一个字符
		③getchar()只能读取输入流回车符前面的字符，不可以读取回车符！
		④如用户在按回车之前输入了不止一个字符，其他字符会保留在键盘缓存区中，等待后续getchar调用读取。
		也就是说，后续的getchar调用不会等待用户按键，
		而直接读取缓冲区中的字符，直到缓冲区中的字符读完后，才等待用户按键。*/
	//在程序中第一次调用getchar()函数从输入缓冲区中读取一个字节的数据。

	//	需要注意的是，如果此时在程序中第二次调用getchar()函数，
	//	因为此时输入缓冲区中还有回车键的数据没有被读出，第二个getchar()函数读出的是回车符。
	char content;
	int letter = 0, space = 0, number = 0, else_content = 0;
	while ((content = getchar())&& (content!= '\n'))
	{
		if (content>= 'a' && content <= 'z' || content >= 'A' && content <= 'Z')
			letter = letter + 1;
		else if (content >= '0' && content <= '9')
			number = number + 1;
		else if (content == ' ')
			space = space + 1;
		else
			else_content = else_content + 1;
	}
	cout << "英文字母个数为：" << letter << endl;
	cout << "空格个数为：" << space << endl;
	cout << "数字个数为：" << number << endl;
	cout << "其他字符个数为：" << else_content << endl;
	return 0;
}
//#include <iostream>
//using namespace std;
//int main()
//{
//    char content;
//    int letter = 0, space = 0, number = 0, else_content = 0;
//    cout << "请输入一行字符：" << endl;
//    while ((content = getchar()) && (content != '\n'))
//    {
//        if ((content >= 'a' && content <= 'z') || (content >= 'A' && content <= 'Z'))
//            letter += 1;
//        else if (content >= '0' && content <= '9')
//            number += 1;
//        else if (content == ' ')
//            space += 1;
//        else
//            else_content += 1;
//    }
//    cout << "英文字母个数为：" << letter << endl;
//    cout << "空格个数为：" << space << endl;
//    cout << "数字个数为：" << number << endl;
//    cout << "其他字符个数为：" << else_content << endl;
//    return 0;
//}

