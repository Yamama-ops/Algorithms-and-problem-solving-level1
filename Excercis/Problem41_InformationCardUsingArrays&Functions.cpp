#include<iostream>
#include<cmath>
using namespace std;
struct stInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};
void ReadInfo(stInfo& Info)
{
	cout << "**********************************" << endl;
	cout << "Enter your firstname: " << endl;
	cin >> Info.FirstName;
	cout << "Enter your lastname: " << endl;
	cin >> Info.LastName;
	cout << "Enter your age: " << endl;
	cin >> Info.Age;
	cout << "Enter your phone number: " << endl;
	cin >> Info.Phone;
}
void PrintInfo(stInfo Info)
{
	cout << "**********************************" << endl;
	cout << "Your firstname is: " << Info.FirstName << endl;
	cout << "Your lastname is: " << Info.LastName << endl;
	cout << "Your age is: " << Info.Age << endl;
	cout << "Your phone is: " << Info.Phone << endl;
}
void ReadPersonsInfo(stInfo Persons[2])
{
	ReadInfo(Persons[0]);
	ReadInfo(Persons[1]);
}
void PrintPersonsInfo(stInfo Persons[2])
{
	PrintInfo(Persons[0]);
	PrintInfo(Persons[1]);
}
int main()
{
	stInfo Persons[2];
	ReadPersonsInfo(Persons);
	PrintPersonsInfo(Persons);
}