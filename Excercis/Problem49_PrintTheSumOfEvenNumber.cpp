#include<iostream>
using namespace std;
int main()
{
	int N;
	int Sum = 0;
	cout << "Enter N" << endl;
	cin >> N;
	for (int i = 0; i <= N; i=i + 2)
	{
		Sum = Sum + i;
		
	}
	cout << "The sum is " << Sum << endl;
}