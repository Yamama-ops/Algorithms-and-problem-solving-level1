#include<iostream>
using namespace std;
int main()
{
	double BillValue;
	cout << "Enter the bill value" << endl;
	cin >> BillValue;
	double TotalBill = BillValue * 1.1;
	TotalBill = TotalBill * 1.16;
	cout << "The total bill is: " << TotalBill << endl;
	return 0;
}