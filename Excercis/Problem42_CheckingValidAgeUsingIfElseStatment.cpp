#include<iostream>
#include<string>
using namespace std;
int main()
{
	int Age;
	cout << "Enter your age: " << endl;
	cin >> Age;
	if (Age >= 18 && Age <= 45)
	{
		cout << "Valid" << endl;
	}
	else
	{
		cout << "Invalid" << endl;
	}
	return 0;
}