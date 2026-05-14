#include <iostream>
using namespace std;

int main()
{
	string Name, City, Country;
	int Age;
	float MonthlySalary, YearlySalary;
	char Gender;
	bool Married;

	cout << "Enter your name" << endl;
	cin >> Name;

	cout << "Enter your age" << endl;
	cin >> Age;

	cout << "Enter Your city name " << endl;
	cin >> City;

	cout << "Enter you countey name" << endl;
	cin >> Country;

	cout << "Enter your monthlySalary " << endl;
	cin >> MonthlySalary;

	cout << "Enter your yearlysalary" << endl;
	cin >> YearlySalary;
	
	cout << "Enter your Gender \"F\" or \"M\" ?" << endl;
	cin >> Gender;

	cout << "Enter True if married or false if not ?" << endl;
	cin >> Married;

	cout << "					Your data is as the following :					 " << endl;
		cout<< "Name: " <<Name<< endl;
	cout << "Age: " << Age << endl;
	cout << "City: " << City << endl;
	cout << "Country: " << Country << endl;
	cout << "Monthly Salary: " << MonthlySalary << endl;
	cout << "Yearly Salary: " << YearlySalary << endl;
	cout << "Gender: " << Gender << endl;
	cout << "Married: " << Married << endl;

	return 0;


}

