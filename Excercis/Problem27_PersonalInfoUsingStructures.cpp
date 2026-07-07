#include<iostream>
using namespace std;

	struct stAddress
	{
		string street;
		string Location;
	};

	struct stContactInfo
	{
		string Facebook;
		string Instagram;
		string PhoneNumber;
	};
	struct stFullName
	{
		string FatherName;
		string MotherName;
		string FamilyName;
	};
	struct stRelation
	{
		int Times_Married;
		int Children_Num;
	};
	struct stPersonalInfo
	{
		string Name;
		string Country;
		string City;
		string Age;
		int MonthlySalary;
		int YearlySalary;
		char Gender;
		bool IsMarried;
		stAddress Address;
		stContactInfo ContactInfo;
		stFullName FullName;
		stRelation Relation;
	 };
	int main()
	{
		stPersonalInfo user1;
		cout << "Enter your name:" << endl;
		cin >> user1.Name;

		cout << "Enter your father name: " << endl;
		cin >> user1.FullName.FatherName;

		cout << "Enter your mother name: " << endl;
		cin >> user1.FullName.MotherName;

		cout << "Enter your family name: " << endl;
		cin >> user1.FullName.FamilyName;

		cout <<"Enter your age: " << endl;
		cin >> user1.Age;

		cout << "Enter your countryname: " << endl;
		cin >> user1.Country;

		cout << "Enter your cityname: " << endl;
		cin >> user1.City;

		cout << "Enter your citystreet: " << endl;
		cin >> user1.Address.street;

		cout << "Enter your location: " << endl;
		cin >> user1.Address.Location;

		cout << "Enter your monthlysalary: " << endl;
		cin >> user1.MonthlySalary;

		cout << "Enter your yearlysalary: " << endl;
		cin >> user1.YearlySalary;

		cout << "Enter your Gender: " << endl;
		cin >> user1.Gender;

		cout << "Enter if you are married: " << endl;
		cin >> user1.IsMarried;

		cout << "How many times have you get married: " << endl;
		cin >> user1.Relation.Times_Married;

		cout << "How many children do you have: " << endl;
		cin >> user1.Relation.Children_Num;

		cout << "Enter your facebook link: " << endl;
		cin >> user1.ContactInfo.Facebook;

		cout << "Enter your instagram link: " << endl;
		cin >> user1.ContactInfo.Instagram;

		cout << "Enter your phone number: " << endl;
		cin >> user1.ContactInfo.PhoneNumber;

		cout << "			Your Information as the following			" << endl;
		cout << "Your name is: " << user1.Name << endl;
		cout << "Your father name is: " << user1.FullName.FatherName << endl;
		cout << "Your mother name is: " << user1.FullName.MotherName << endl;
		cout << "Your  Family name is: " << user1.FullName.FamilyName << endl;
		cout << "Your age is: " << user1.Age << endl;
		cout << "Your countryname is: " << user1.Country<<endl;
		cout << "Your cityname is: "<< user1.City << endl;
		cout << "Your citystreet is: " << user1.Address.street<< endl;
		cout << "Your location is: " << user1.Address.Location<< endl;
		cout << "Your monthlysalary is: " << user1.MonthlySalary<< endl;
		cout << "Your yearlysalary is: " << user1.YearlySalary<< endl;
		cout << "Your Gender: " << user1.Gender<< endl;
		cout << "Are you married: " << user1.IsMarried<< endl;
		cout << "How many times have you get married: " << user1.Relation.Times_Married<< endl;
		cout << "How many children do you have: " << user1.Relation.Children_Num<< endl;
		cout << "Your facebook link: " << user1.ContactInfo.Facebook<< endl;
		cout << "Your instagram link: " << user1.ContactInfo.Instagram<< endl;
		cout << "Your phone number: " << user1.ContactInfo.PhoneNumber<<endl;
		
		return 0;
	}


