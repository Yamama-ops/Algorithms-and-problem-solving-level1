#include<iostream>
using namespace std;

int main()
{
	int Number1, Number2, Temp;
	cout << "Enter Number1" << endl;
	cin >> Number1;
	cout << "Enter Number2" << endl;
	cin >> Number2;
	cout << "		Numbers Before Swapping			" << endl;
	cout <<"Number1: " << Number1<<endl;
	cout << "Number2: " << Number2<<endl;

	Temp = Number1;
	Number1 = Number2;
	Number2 = Temp;
	cout << "		Numbers After Swapping			" << endl;
	cout << "Number1: " << Number1 << endl;
	cout <<"Number2: " << Number2 << endl;
}
