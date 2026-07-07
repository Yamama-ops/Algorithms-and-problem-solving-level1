#include<iostream>
#include<string>
using namespace std;
int main()
{
	string St1 = "43.22";
	int N1 = 20;
	double N2 = 33.5;
	float N3 = 55.23;

	int Num1 = stoi(St1);
	float Num2 = stof(St1);
	double Num3 = stod(St1);

	string StN1 = to_string(N1);
	string StN2 = to_string(N2);
	string StN3 = to_string(N3);

	cout << Num1 << endl;
	cout << Num2 << endl;
	cout << Num3 << endl;
	cout << StN1 << endl;
	cout << StN2 << endl;
	cout << StN3 << endl;
	return 0;
}