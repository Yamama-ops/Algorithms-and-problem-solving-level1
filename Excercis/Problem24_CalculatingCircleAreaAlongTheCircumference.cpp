#include<iostream>
using namespace std;
int main()
{
	int L;
	const double PI = 3.14;
	cout << "Enter L" << endl;
	cin >> L;
	double Area = floor(pow(L, 2) / (PI * 4));
	cout << "The Area of a circle along the circumference: "<<Area << endl;
	return 0;


}