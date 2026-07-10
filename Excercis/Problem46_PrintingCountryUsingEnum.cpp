#include<iostream>
#include<string>
using namespace std;
enum enCountrychoice{Jordan=1,Tunisa=2,Algeria=3,Oman=4,Egypt=5,Iraq=6,Other=7};
int main()
{
	int C;
	cout << "Please enter your country: " << endl;
	cout << "(1)Jordan" << endl;
	cout << "(2)Tunisa" << endl;
	cout << "(3)Algeria" << endl;
	cout << "(4)Oman" << endl;
	cout << "(5)Egypt" << endl;
	cout << "(6)Iraq" << endl;
	cout << "****************************************" << endl;
	cout << "Your choice?";
	cin >> C;
	cout << endl;
	enCountrychoice Country;
	Country = (enCountrychoice)C;
	if (Country == enCountrychoice::Jordan)
	{
		cout << "your country is Jordan " << endl;
	}
	else if (Country == enCountrychoice::Tunisa)
	{
		cout << "your country is Tunsia" << endl;
	}
	else if (Country == enCountrychoice::Algeria)
	{
		cout << "your country is Tunsia" << endl;
	}
	else if (Country == enCountrychoice::Oman)
	{
		cout << "your country is Oman" << endl;
	}
	else if (Country == enCountrychoice::Egypt)
	{
		cout << "your country is Egypt" << endl;
	}
	else if (Country == enCountrychoice::Iraq)
	{
		cout << "your country is Iraq" << endl;
	}
	else
	{
		cout << "Your choice is other" << endl;
	}

	return 0;

}