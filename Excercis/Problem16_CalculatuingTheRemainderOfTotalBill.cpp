#include <iostream>
using namespace std;
int main()
{
	int TotalBill, CashPaid, Remainder;
	cout << "Enter the total bill" << endl;
	cin >> TotalBill;
	cout << "Enter the cashpaid" << endl;
	cin >> CashPaid;
	Remainder = CashPaid-TotalBill;
	cout << "The Remainder is: " << Remainder;
	return 0;

}