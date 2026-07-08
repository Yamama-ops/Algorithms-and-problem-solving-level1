#include<iostream>
using namespace std;
double CalculateArea( double a, double b)
{
	double Area = a * b;
	return Area;
}
int main()
{
	double a, b, Area;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	
	Area = CalculateArea( a, b);
	cout << "The Area of rectangle is: " << Area << endl;
	return 0;
}