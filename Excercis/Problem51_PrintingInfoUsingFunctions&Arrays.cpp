#include<iostream>
using namespace std;
struct strInfo
{
	string firstName;
	string LastName;
	string Phone;
	int Age;
};
void ReadInfo(strInfo& Info)
{
	cout << "Enter your firstname: ";
	cin >> Info.firstName;
	cout << endl;
	cout << "Enter your lastname: ";
	cin >> Info.LastName;
	cout << endl;
	cout << "Enter your age: ";
	cin >> Info.Age;
	cout << endl;
	cout << "Enter your phone: ";
	cin >> Info.Phone;
	cout << endl;

}
void PrintInfo(strInfo Info)
{
	cout << "FirstName: "<<Info.firstName<<endl;
	cout << "LastName: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone: " << Info.Phone << endl;

}
void ReadPersonsInfo(strInfo persons[100], int& Length)
{
	cout << "How many persons you want to enter: " << endl;
	cin >> Length;
	for (int i = 0; i < Length; i++)
	{
		cout << "Persons[" << i+1 << "]" << endl;
		ReadInfo(persons[i]);
	}
}
void PrintPersonsInfo(strInfo persons[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << "*****************************" << endl;
		cout << "Persons[" << i+1 << "]" << endl;
		PrintInfo(persons[i]);
		
	}
}
int main()
{
	strInfo Persons[100];
	int Length = 0;
	ReadPersonsInfo(Persons, Length);
	PrintPersonsInfo(Persons, Length);
}
	