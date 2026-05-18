#include<iostream>
using namespace std;
int main()
{
	int r;
	const double Pi = 3.14;
	cout << "Enter r" << endl;
	cin >> r;
	double Area = (Pi * pow(r, 2));
	cout << "THe Area of circle is: " << Area << endl;
	return 0;
}