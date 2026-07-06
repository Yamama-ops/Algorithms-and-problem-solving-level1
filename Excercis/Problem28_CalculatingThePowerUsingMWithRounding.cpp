#include<iostream>
using namespace std;
int main()
{
	double Number;
	int M;
	cout << "Enter Number" << endl;
	cin >> Number;
	cout << "Enter M" << endl;
	cin >> M;
	cout <<"The result is "<< round(pow(Number, M)) << endl;
	return 0;
}