#include<iostream>
using namespace std;
int main()
{
	int days, hours, minutes, seconds;
	cout << "Enter number of days:" << endl;
	cin >> days;
	cout << "Enter number of hours: " << endl;
	cin >> hours;
	cout << "Enter number of minutes: " << endl;
	cin >> minutes;
	cout << "Enter number of seconds: " << endl;
	cin >> seconds;
	int TotalSeconds = days * 86400 + hours * 3600 + minutes * 60 + seconds;
	cout << "The TotalSeconds is: " << round(TotalSeconds) << endl;
	return 0;
}