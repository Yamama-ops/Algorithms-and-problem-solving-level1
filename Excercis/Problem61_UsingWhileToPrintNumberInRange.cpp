#include<iostream>
using namespace std;
int ReadPositiveNumberInRange(int From, int To)
{
	int Number;
	cout << "Please enter a number between:" <<From<<" and " << To << endl;
	cin >> Number;
	while (Number<From || Number>To)
	{
		cout << "Wrong Number"<<endl;
		cout << "Please enter a number between " << From << "and" << To << endl;
		cin >> Number;
	}
	return Number;
}
int main()
{
	cout << "The number is: " << ReadPositiveNumberInRange(1, 10) << endl;
	return 0;
}