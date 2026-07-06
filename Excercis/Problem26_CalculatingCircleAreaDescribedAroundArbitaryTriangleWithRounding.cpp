#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	
	const double PI = 3.14;
	double Area;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	cout << "Enter c" << endl;
	cin >> c;
	int p = (a + b + c) / 2;

	Area = round(PI * (pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2)));
	cout << "The Area is " << Area;

}