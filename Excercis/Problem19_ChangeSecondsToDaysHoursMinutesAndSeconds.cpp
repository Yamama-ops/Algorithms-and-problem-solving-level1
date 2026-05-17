#include<iostream>
using namespace std;
int main()
{
	int TotalSeconds;
	int RemainderOfDays, RemainderOfHours, RemainderOfMinutes;
	int Days, Hours, Minutes, Seconds;
	cout << "Enter the number of Seconds" << endl;
	cin >> TotalSeconds;

	Days = TotalSeconds / 86000;
	RemainderOfDays = TotalSeconds - Days * 86000;

	Hours = RemainderOfDays / 3600;
	RemainderOfHours = RemainderOfDays - Hours * 3600;

	Minutes = RemainderOfHours / 60;
	RemainderOfMinutes = RemainderOfHours - Minutes * 60;

	Seconds = RemainderOfMinutes;
	cout << "The Number of Days is: " << Days << endl;
	cout << "The number of Hours is: " << Hours << endl;
	cout << "The Number of Minutes is: " << Minutes << endl;
	cout << "The Number of Seconds is: " << Seconds << endl;
	return 0;

	
}