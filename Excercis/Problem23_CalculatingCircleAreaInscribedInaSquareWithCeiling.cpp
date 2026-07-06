#include<iostream>
using namespace std;
int main()
{
	int A;
	const double PI = 3.14;
	cout << "Enter A" << endl;
	cin >> A;
	double Area = (PI * pow(A, 2) / 4);
	cout << "The Area of the circle is: " << ceil (Area) << endl;

	return 0;
}
