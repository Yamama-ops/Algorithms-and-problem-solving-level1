#include<iostream>
using namespace std;
double CalculateArea(double a, double d)
{
	
	return (a*sqrt(pow(d,2)-pow(a,2)));
}
int main()
{
	double a, d, Area;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter d" << endl;
	cin >> d;

	Area = CalculateArea(a, d);
	cout << "The Area of rectangle through diagonal is: " << Area << endl;
	return 0;
}