#include<iostream>
#include<string>
using namespace std;
int main()
{
	double comission;
	double TotalSales;
	cout << "Enter the totalsales: " << endl;
	cin >> TotalSales;
	if (TotalSales > 1000000)
	{
		cout << "Percentages is 1%" << endl;
		comission = TotalSales * 0.1;
		cout << comission << endl;
	}
	else if (TotalSales > 500000 && TotalSales < 1000000)
	{
		cout << "Percentages is 2%" << endl;
		comission = TotalSales * 0.2;
		cout << comission << endl;
	}
	else if (TotalSales > 100000 && TotalSales < 500000)
	{
		cout << "Percentages is 3%" << endl;
		comission = TotalSales * 0.3;
		cout << comission << endl;
	}
	else if (TotalSales > 50000 && TotalSales < 100000)
	{
		cout << "Percentages is 5%" << endl;
		comission = TotalSales * 0.5;
		cout << comission << endl;
	}
	else
	{
		cout << "The percentage is 0%" << endl;
	}
	return 0;
}