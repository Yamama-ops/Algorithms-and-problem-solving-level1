#include<iostream>
#include<cmath>
using namespace std;
void ReadGradeArray(int Grade[3])
{
	cout << "Enter grade1" << endl;
	cin >> Grade[0];
	cout << "Enter grade2" << endl;
	cin >> Grade[1];
	cout << "Enter grade3" << endl;
	cin >> Grade[2];

}
void PrintGradeArray(int Grade[3])
{
	cout <<"The first grade is: " << Grade[0] << endl;
	cout << "The second grade is: " <<Grade[1] << endl;
	cout << "The third grade is:" << Grade[2] << endl;
}
int Avg(int Grade[3])
{
	return (Grade[0] + Grade[1] + Grade[2]) / 3;
}
int main()
{
	int Grade[3];
	ReadGradeArray(Grade);
	cout << endl;
	cout << "The grades are: " << endl;
	PrintGradeArray(Grade) ;
	cout << endl;
	cout << "The Average is: " << Avg(Grade) << endl;
	return 0;
}