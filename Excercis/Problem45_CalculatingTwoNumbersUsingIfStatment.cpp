#include<iostream>
#include<string>
using namespace std;
int main()
{
	int Num1, Num2, Total;
	string OpType;
	cout << "Enter the first number: ";
	cin >> Num1;
	cout << endl;
	cout << "Enter the second number: ";
	cin >> Num2;
	cout << endl;
	cout << "Entr the operation type: ";
	cin >> OpType;

	if (OpType == "+")
	{
		cout << Num1 << "+" << Num2 << "=" << Num1 + Num2;
	}
	else if (OpType == "-")
	{
		cout << Num1 << "-" << Num2 << "=" << Num1 - Num2;
	}
	else if (OpType == "*")
	{
		cout << Num1 << "*" << Num2 << "=" << Num1 * Num2;
	}
	else if (OpType == "/")
	{
		cout << Num1 << "/" << Num2 << "=" << Num1 / Num2;
	}
	else
	{
		cout << "Fail";
	}
}
