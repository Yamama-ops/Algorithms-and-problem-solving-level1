#include <iostream>
using namespace std;
int main()
{
	int Pennies, Nickles, Dimes, Quarters, Dollars;
	cout << "Enter the Number of pennies you have : " << endl;
	cin >> Pennies;
	cout << "Enter the Number of Nickles you have: " << endl;
	cin >> Nickles;
	cout << "enter the Number of Dimes you have:" << endl;
	cin >> Dimes;
	cout << "Enter the number of Quarters you have :" << endl;
	cin >> Quarters;
	cout << "Enter the Number of Dollars you have:" << endl;
	cin >> Dollars;
	int TotalPennies = Pennies + Nickles * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
	cout << "The total number of pennies you have is: " << TotalPennies << endl;

	return 0;
}