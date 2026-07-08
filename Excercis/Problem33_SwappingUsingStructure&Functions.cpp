#include<iostream>
#include<string>
using namespace std;
struct SwappedValues
{
	int Num1;
	int Num2;
};
void Print(int Num1, int Num2)
{
	cout << Num1 << endl;
	cout << Num2 << endl;
}
SwappedValues Swapping(int Num1, int Num2)
{
	int Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
	SwappedValues result;
	result.Num1;
	result.Num2;

	return result;
}
int main()
{
	int Num1, Num2;
	cout << "Enter Num1" << endl;
	cin >> Num1;
	cout << "Enter Num2" << endl;
	cin >> Num2;
	cout << "Before Swapping: " << endl;
	Print(Num1, Num2);
	SwappedValues Swapped = Swapping(Num1, Num2);
	Num1 = Swapped.Num1;
	Num2 = Swapped.Num2;
	cout << "After Swapping " << endl;
	Print(Num1, Num2);
	return 0;
}