#include<iostream>
using namespace std;
int main()
{
	double Num;
	cout << "Enter a Number" << endl;
	cin >> Num;
	cout << round(pow(Num, 2))<<endl;
	cout << round(pow(Num, 3))<<endl;
	cout << round(pow(Num, 4))<<endl;
	return 0;

}