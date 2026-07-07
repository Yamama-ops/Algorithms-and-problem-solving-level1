#include<iostream>
#include<string>
using namespace std;
int main()
{
	string S1, S2, S3;
	cout << "Please enter your fullname: " << endl;//Mohammad Abu_Hadhoud
	getline(cin, S1);
	cout << "Please enter string2" << endl;//5
	cin >> S2;
	cout << "Please enter string3" << endl;//10
	cin >> S3;
	cout << "*******************************" << endl;
	cout << "The length of string1 is: " << S1.length() << endl;//20
	cout << "The charachter of 0,2,4,7 are:  " << S1[0] << S1[2] << S1[4] << S1[7] << endl;//Mhmd
	cout << "Concatenating string2 and string3: " << S2 + S3 << endl;//510
	cout << S2<<"*"<<S3 <<"=" << stoi(S2) * stoi(S3) << endl;
	return 0;
}