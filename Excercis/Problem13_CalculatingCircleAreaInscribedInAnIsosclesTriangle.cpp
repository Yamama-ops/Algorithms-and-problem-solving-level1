#include <iostream>
using namespace std;
int main()
{
	const double PI = 3.14;
	int a, b;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	double Area = (PI * b*b/ 4.0) * ((2.0 * a - b) / (2.0 * a + b));
	cout << "The area of a circle inscribed in an iscoscles triangle: " << Area << endl;
	return 0;
}

