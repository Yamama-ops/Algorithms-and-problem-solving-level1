#include<iostream>
#include<string>
using namespace std;
enum enWeekDay{Sun=1,Mon=2,Tue=3,Wed=4,Thu=5,Fri=6,Sat=7};
void ShowWeekDayMenu()
{
	cout << "******************************************" << endl;
	cout << "(1)Sunday" << endl;
	cout << "(2)Monday" << endl;
	cout << "(3)Tuesday" << endl;
	cout << "(4)Wednesday" << endl;
	cout << "(5)Thursday" << endl;
	cout << "(6)Friday" << endl;
	cout << "(7)Saturday" << endl;
	cout << "Please enter the number of the day: " << endl;
	cout << "******************************************" << endl;

}
enWeekDay ReadWeekDay()
{
	int C;
	cin >> C;
	enWeekDay Day;
	return (enWeekDay)C;
}
string GetWeekDay(enWeekDay Day)
{
	switch (Day)
	{
	case enWeekDay::Sun:
		return "Sunday";
		break;
	case enWeekDay::Mon:
		return"Monday";
		break;
	case enWeekDay::Tue:
		return"Tuesday";
		break;
	case enWeekDay::Wed:
		return "Wednesday";
		break;
	case enWeekDay::Thu:
		return "Thursday";
		break;
	case enWeekDay::Fri:
		return "Friday";
		break;
	case enWeekDay::Sat:
		return"Saturday";
		break;
	}
}
int main()
{
	ShowWeekDayMenu();
	cout << "Today is:" << GetWeekDay(ReadWeekDay()) << endl;
	return 0;
}