#include<iostream>
using namespace std;
int main()
{
	int LoanAmount, MonthlyPayment, NumberOfMonths;
	cout << "Enter The Laon Amount:" << endl;
	cin >> LoanAmount;
	cout << "Enter The Monthly Payment:" << endl;
	cin >> MonthlyPayment;
	NumberOfMonths = LoanAmount / MonthlyPayment;
	cout << "You need " << NumberOfMonths << " Months" << endl;
	return 0;
}