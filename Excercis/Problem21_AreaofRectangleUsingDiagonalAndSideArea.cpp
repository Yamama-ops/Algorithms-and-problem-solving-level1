#include<iostream>
using namespace std;
int main()
{
	int a, d;
	cout << "Enrer a" << endl;
	cin >> a;
	cout << "Enter d" << endl;
	cin >> d;
	double Area = a * (sqrt(pow(d, 2) - pow(a, 2)));
	cout << "The area of a rectaangle through diagonal and side area is :" << Area << endl;
	return 0;
}