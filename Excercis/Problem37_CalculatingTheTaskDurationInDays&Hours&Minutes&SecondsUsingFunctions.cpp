#include<iostream>
#include<cmath>
using namespace std;
int CDay(int TotalSeconds)
{
	return TotalSeconds / 86400;
}
int CHour(int RemainderOfDay)
{
	return RemainderOfDay / 3600;
}
int CMin(int RemainderOfHour)
{
	return RemainderOfHour / 60;
}

int main()
{
	int TotalSeconds, RemainderOfDay, RemainderOfHour, RemainderOfMin,NumberOfSeconds;
	cout << "Enter Number of total seconds: " << endl;
	cin >> TotalSeconds;
	RemainderOfDay = TotalSeconds - CDay(TotalSeconds) * 86400;
	RemainderOfHour = RemainderOfDay - CHour(RemainderOfDay)*3600;
	RemainderOfMin = RemainderOfHour - CMin(RemainderOfHour) * 60;
	NumberOfSeconds = RemainderOfMin;



	
	cout << "The Number of Days is: " << CDay(TotalSeconds)<<endl;
	cout << "The Number of hours is:  " << CHour(RemainderOfDay) << endl;
	cout << "The Number of Minutes is: " << CMin(RemainderOfHour) << endl;
	cout << "The Number of Seconds is: " << NumberOfSeconds << endl;
	return 0;

	
}