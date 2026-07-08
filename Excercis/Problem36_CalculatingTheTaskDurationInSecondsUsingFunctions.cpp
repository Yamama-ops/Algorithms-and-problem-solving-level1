#include<iostream>
using namespace std;
int SecDay(int Day)
{
	return Day * 86400;
}
int SecHour(int Hour)
{
	return Hour * 3600;
}
int SecMin(int Min)
{
	return Min * 60;
}
void TotalSeconds(int SecondsPerDay, int SecondsPerHour, int SecondsPerMinutes, int Seconds)
{
	int TotalSeconds = SecondsPerDay + SecondsPerHour + SecondsPerMinutes + Seconds;
	cout << "The Total Number of seconds is: " << TotalSeconds << endl;
}
int main()
{
	int Day, Hour, Min, Seconds;
	cout << "Enter Number of Days: ";
	cin >> Day;
	cout << "Enter Number of Hours: ";
	cin >> Hour;
	cout << "Enter Number of Minutes: ";
	cin >> Min;
	cout << "Enter Number of Seconds: ";
	cin >> Seconds;

	int SecondsPerDay = SecDay(Day);
	int SecondsPerHour = SecHour(Hour);
	int SecondsPerMinutes = SecMin(Min);

	TotalSeconds(SecondsPerDay, SecondsPerHour, SecondsPerMinutes, Seconds);

}

