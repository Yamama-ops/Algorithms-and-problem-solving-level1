#include<iostream>
using namespace std;
int main()
{
	int p = 1;
	int Number;
	int power;
	cout << "Enter Number: " << endl;
	cin >> Number;
	cout << "Enter power: " << endl;
	cin >> power;
	for (int i = 1; i <= power && power != 0; i++)
	{
		
		p = p *Number;
		
		
	}
	cout <<Number<<"^" <<power<< "=" << p << endl;
}
