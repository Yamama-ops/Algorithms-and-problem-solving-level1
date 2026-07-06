#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.14;
	double a, b;
	double Area;
	cout << "Please enter a" << endl;
	cin >> a;

	cout << "Please enter b" << endl;
	cin >> b;
	Area = (PI * b * b / 4)*((2 * a - b) / (2 * a + b));
	cout << "The Area is " << Area << endl;
	return 0;

}