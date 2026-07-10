#include<iostream>
#include<string>;
using namespace std;
int main()
{
	string Code;
	cout << "Enter your PIN" << endl;
	cin >> Code;
	if (Code == "1234")
	{
		cout << "Balance=7500" << endl;

	}
	else
	{
		cout << "Wrong" << endl;
	}
	return 0;
}