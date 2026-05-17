#include<iostream>
using namespace std;
int main()
{
	int Days, Hours, Minutes, Seconds;
	cout << "Enter how many days? " << endl;
	cin >> Days;
	cout << "Enter how many hours? " << endl;
	cin >> Hours;
	cout << "Enter how many minutes? " << endl;
	cin >> Minutes;
	cout << "Enter how many seconds" << endl;
	cin >>Seconds;
	int TotalSeconds = Days * 86000 + Hours * 3600 + Minutes * 60 + Seconds;
	cout << "The total number of seconds is: " << TotalSeconds << endl;
	return 0;

}
