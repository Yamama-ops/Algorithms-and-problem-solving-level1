#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.14;
	int D;
	cout << "Enter D" << endl;
	cin >> D;
 
	cout<<"The Area of circle is: "<< ceil((PI * pow(D, 2) / 4));
	return 0;
}