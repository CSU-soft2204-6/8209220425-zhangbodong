#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<double> scorevector;
	double max, temp;
	int i;
	cout << "input -1 to stop:" << endl;
	cout << "enter the original score 1:";
	cin >> max;
	scorevector.push_back(max);
	for (int i = 1; true; i++)
	{
		cout << "enter the original score" << i + 1 << ":";
		cin >> temp;
		if (temp == -1)
		{
			break;
		}
		scorevector.push_back(temp);
		if (temp > max)max = temp;

}
	max /= 100;
	cout << "Output the standard scores: " << endl;
	for (i = 0; i < scorevector.size(); i++) {
		scorevector[i] /= max;
		cout << scorevector[i] << " ";
	}
	cout << endl;
	return 0;
	//Advantagesand disadvantages of goods produced in foreign countriesand transported over long distances
}