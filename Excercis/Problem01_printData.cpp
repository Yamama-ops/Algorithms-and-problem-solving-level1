#include<iostream>
using namespace std;
int main()
{
	int FirstNumber, SeconNumber, ThirdNumber, Total;
	cout << "Enter FirstNumber" << endl;
	cin >> FirstNumber;
	cout << "Enter SecondNumber " << endl;
	cin >> SeconNumber;
	cout << "Enter ThirdNumber " << endl;
	cin >> ThirdNumber;
	Total = FirstNumber + SeconNumber + ThirdNumber;
	cout << "\n";
	cout << FirstNumber << "+" << endl;
	cout << SeconNumber << "+" << endl;
	cout << ThirdNumber << "=" << endl;

	cout << "---------------------" << endl;
	cout << Total << endl;
}