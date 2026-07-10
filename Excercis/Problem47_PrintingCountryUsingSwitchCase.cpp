#include<iostream>
#include<string>
using namespace std;
enum enCountrychoice { Jordan = 1, Tunisa = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, Other = 7 };
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
	switch (Country)
	{
	case enCountrychoice::Jordan:
		cout << "Your country is Jordan " << endl;
		break;
	case enCountrychoice::Tunisa:
		cout << "Your country is Tunisa " << endl;
		break;
	case enCountrychoice::Egypt:
		cout << "Your country is Egypt " << endl;
		break;
	case enCountrychoice::Iraq:
		cout << "Your country is Iraq" << endl;
		break;
	case enCountrychoice::Algeria :
		cout << "Your country is Algeria " << endl;
		break;
	case enCountrychoice::Oman:
		cout << "Your country is Oman " << endl;
		break;
	case enCountrychoice::Other:
		cout << "Your country is Other " << endl;
		break;
	}
	

	return 0;

}