//#include<iostream>
//using namespace std;
//int indexof(const char* s1, const char* s2)
//{
//	/*基本思路：利用指针p依次遍历str1，每遍历一位字符便将之与str2的首地址值* q进行比较，
//		如果相同则两个指针同时自增，然后依次向后比较，若不同则指针p往下移动一位，再与str2的首地址值* q进行比较，循环往复，直到str2遍历完（即确定str2为子串），或者str1遍历完。
//
//		①外层循环：for(p = str1; *p; p++)意思是从首地址开始，只要* p不等于'0'，则执行内嵌语句块，然后自增；
//
//		②内层循环：for(q = str2; *p == *q && *q; p++, q++); 意思是从首地址开始，
//		判断两个字符串的值是否相等且str2是否遍历完，因为for语句后面有分号，表示它没有内嵌语句，所以若判断为真则执行第三表达式，判断为假则退出内层循环*/
//		//，执行外循中内嵌的其他语句，然后再执行外层循环，接着再从头开始执行内层循环。
//	//int flag = 0;
//	////int a = strlen(s1);
//	////int b = strlen(s2);
//	//const char* p = s1;
//	//const char* q = s2;
//	//for (p = s1; *p != 0; p++)
//	//{
//	//	for (q = s2; *p == *q && *q != 0; p++, q++);
//	//	if (!*q)//如果str2遍历完，此时*q的值一定是默认值‘0’，那么！*q为真
//	//	{
//	//		flag = 1;
//	//		break;
//	//	}
//	//}
//	//if (flag == 1) return 1;
//	//else return 0;
//	int i, j, la, lb, num ,c= 0;
//	la = strlen(s1);
//    lb = strlen(s2);
//	for (i = 0; (la - i) >= lb; i++)//如果遍历到i还没行，将剩下的串长与要查找的串长相比，若还大，接着循环，若小，就不用再比较了
//	{
//		if (s1[i] == s2[0])
//		{
//			for (j = 1; j < lb; j++)
//				if (s1[i + j] != s2[j])//for后面没有分号和大括号，所以紧跟的第一句为其循环体
//					break;//if后面没有分号和大括号，所以紧跟的第一句为其循环体
//			if (j == lb)
//			{
//				cout << j;
//				 c=i + 1;
//				break;
//			}
//		}
//	}
//	return c;
//}
//int main()
//{
//	const int size = 999;
//	char s1[size], s2[size];
//	cin.getline(s1, size);
//	cin.getline(s2, size);
//	indexof(s1, s2);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, la, lb, num = 0;
    char c, a[120], b[100];
    printf("请输入母串:");
    while ((c = getchar()) != '\n')//while循环后没有大括号{}或分号；时，则紧邻的第一句为其循环体
        a[num++] = c;//用数组a存储被查找字符串

    num = 0;//num一定要重新赋值为0，否则数组b的值就不是从首地址开始
    printf("输入要查找的字符串:");
    while ((c = getchar()) != '\n')
        b[num++] = c;//用数组b存储要查找的字符串

    la = strlen(a);
    lb = strlen(b);
    for (i = 0; (la - i) >= lb; i++)//如果遍历到i还没行，将剩下的串长与要查找的串长相比，若还大，接着循环，若小，就不用再比较了
    {
        if (a[i] == b[0])
        {
            for (j = 1; j < lb; j++)
                if (a[i + j] != b[j])//for后面没有分号和大括号，所以紧跟的第一句为其循环体
                    break;//if后面没有分号和大括号，所以紧跟的第一句为其循环体
            if (j == lb)
            {
                printf("子串出现的首位置是母串第%d位\n", i + 1);
                break;
            }
        }
    }

}
