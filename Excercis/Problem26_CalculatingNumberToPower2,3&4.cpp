#include<iostream>
using namespace std;
int main()
{
	int Num;
	int a, b, c;
	cout << "Enter a Number" << endl;
	cin >> Num;
	a = Num * Num;
	b = Num * Num * Num;
	c = Num * Num * Num * Num;
	
	cout << "Your Number is " << Num << endl;
	cout << Num <<"^ 2 = " << a << endl;
	cout << Num << "^ 3 = " << b << endl;
	cout << Num << "^ 4 = " << c << endl;

}