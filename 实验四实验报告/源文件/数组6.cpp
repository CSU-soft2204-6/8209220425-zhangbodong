//#include<iostream>
//using namespace std;
//void count(const char s[], int counts[])
//{
//	int n;
//	n = strlen(s);
//	
//	for (int i = 0; i < n; i++)
//	{
//	//	if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
//	//	{
//
//	//}
//		for (int j = '65'; j <= '90'; j++)
//		{
//			if (s[i] == j)
//			{
//				counts[j - 'A']++;
//			}
//		}
//		for (int k = '97'; k <= '122'; k++)
//		{
//			if (s[i] == k)
//			{
//				counts[k - 'a']++;
//			}
//		}
//	  for (int t = 0; t <= 25; t++)
//	  {
//		
//		if (counts[t] != 0)
//		{
//			cout <<char(t+'a') << counts[t] << " times" << endl;
//		}
//	   }
//	}
//}
//int main()
//{
//	int counts[26];
//	for (int i = 0; i < 26; i++)
//	{
//		counts[i] = 0;
//	}
//	char s[50];
//	cin >> s;
//	void count(const char s, int counts);
//	return 0;
//}
#include <iostream>
using namespace std;

const int num1 = 26;   //num1=letters
const int num2 = 99;  //num2=string

void countLetters(const char list[], int counts[])
{
	for (int i = 0; i < num1; i++)
		counts[i] = 0;
	for (int j = 0; j < num2; j++)
	{
		counts[list[j] - 'a']++;
		counts[list[j] - 'A']++;
	}
}
void displayCounts(const int counts[])
{
	for (int i = 0; i < num1; i++) {
		if (counts[i] != 0)
			cout << static_cast<char>(i + 'a') << " : " << counts[i] << "  times " << endl;
	}
}

int main()
{
	char list[num2];
	int counts[num1];
	cout << "Enter a string : ";
	cin.getline(list, num2);
	countLetters(list, counts);
	displayCounts(counts);

	return 0;
}