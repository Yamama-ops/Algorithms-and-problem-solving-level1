#include<iostream>
#include<string>
using namespace std;
int main()
{
	string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of the string is: " << MyString.length() << endl;
	cout << MyString[2] << endl;
	string S1 = "10", S2 = "20";
	string S3 = S1 + S2;
	int Sum = stoi(S1) + stoi(S2);
	cout << "The sum is: " << Sum << endl;
	return 0;

}