#include<iostream>
using namespace std;
int main()
{
	int Number;
	int Sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter a number: " << endl;
		cin >> Number;
		if (Number >= 50)
		{
			cout << "The sum is greater than 50" << endl;
			continue;
		}
		Sum = Sum + Number;
	}
	cout << "The sum is: " << Sum << endl;
	return 0;
}