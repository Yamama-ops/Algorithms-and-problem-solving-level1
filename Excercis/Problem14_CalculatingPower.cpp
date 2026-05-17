#include <iostream>
using namespace std;
int main()
{
	int Number;
	cout << "Enter a Number" << endl;
	cin >> Number;
	int a, b, c;
	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;
	cout << Number <<"^2=" << a<<endl;
	cout << Number << "^3=" << b<<endl;
	cout << Number << "^4=" << c<<endl;
	return 0;
}