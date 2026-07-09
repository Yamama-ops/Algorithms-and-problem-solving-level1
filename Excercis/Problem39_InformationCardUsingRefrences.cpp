#include<iostream>
#include<string>
using namespace std;

struct stInfo
{
	string Firstname;
	string Lastname;
	int Age;
	string Phone;
};

void ReadInfo(stInfo &Info)
{
	cout << "Enter your firstname: ";
	cin >> Info.Firstname;
	cout << "Enter your lastname: ";
	cin >> Info.Lastname;
	cout << "Please enter your age: ";
	cin >> Info.Age;
	cout << "Enter your phone Number: ";
	cin >> Info.Phone;
}
void PrintInfo(stInfo Info)
{
	cout << "			Your Information as the following			" << endl;
	cout << "Your firstName: " << Info.Firstname << endl;
	cout << "Your lastname: " << Info.Lastname << endl;
	cout << "Your age is: " << Info.Age << endl;
	cout << "Your phone Number is: " << Info.Phone << endl;
}
int main()
{
	stInfo person1,person2;
	cout << "Person1:" << endl;
	ReadInfo(person1);
	PrintInfo(person1);
	cout << endl;
	cout << "Person2:" << endl;
	ReadInfo(person2);
	PrintInfo(person2);
}