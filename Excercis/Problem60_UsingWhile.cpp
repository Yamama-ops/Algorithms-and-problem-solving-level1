#include<iostream>
using namespace std;
int main()

{
	int Number;
	cout << "Please enter a positive number?"<<endl;
	cin >> Number;
	while (Number < 0)
	{
		cout << "Wrong Number, Plz enter a positive number?" << endl;
		cin >> Number;
	}
	cout << "The number you entered is: " << Number << endl;
}