#include<iostream>
#include<string>
using namespace std;
int main()
{
	//���������getcharʱ������͵����û��������û�������ַ�������ڼ��̻������������С�
	//ֱ���û����س�Ϊֹ�����û�����س�֮��getchar�ſ�ʼ����������ÿ�ζ���һ���ַ�
	/*ע�⣡
		��ʹ��getchar()ʱ���û��ڼ�������һ�е����֣��������س���ʱ����һ�лᱻ�����������
		�����û����ѭ���Ļ���getchar����ÿ��ֻ�ܴ��������ж�ȡһ���ַ�
		��getchar()ֻ�ܶ�ȡ�������س���ǰ����ַ��������Զ�ȡ�س�����
		�����û��ڰ��س�֮ǰ�����˲�ֹһ���ַ��������ַ��ᱣ���ڼ��̻������У��ȴ�����getchar���ö�ȡ��
		Ҳ����˵��������getchar���ò���ȴ��û�������
		��ֱ�Ӷ�ȡ�������е��ַ���ֱ���������е��ַ�����󣬲ŵȴ��û�������*/
	//�ڳ����е�һ�ε���getchar()���������뻺�����ж�ȡһ���ֽڵ����ݡ�

	//	��Ҫע����ǣ������ʱ�ڳ����еڶ��ε���getchar()������
	//	��Ϊ��ʱ���뻺�����л��лس���������û�б��������ڶ���getchar()�����������ǻس�����
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
	cout << "Ӣ����ĸ����Ϊ��" << letter << endl;
	cout << "�ո����Ϊ��" << space << endl;
	cout << "���ָ���Ϊ��" << number << endl;
	cout << "�����ַ�����Ϊ��" << else_content << endl;
	return 0;
}
//#include <iostream>
//using namespace std;
//int main()
//{
//    char content;
//    int letter = 0, space = 0, number = 0, else_content = 0;
//    cout << "������һ���ַ���" << endl;
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
//    cout << "Ӣ����ĸ����Ϊ��" << letter << endl;
//    cout << "�ո����Ϊ��" << space << endl;
//    cout << "���ָ���Ϊ��" << number << endl;
//    cout << "�����ַ�����Ϊ��" << else_content << endl;
//    return 0;
//}

