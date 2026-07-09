#include<iostream>
using namespace std;
void Swapping(int &x, int &y)
{
	x = 1;
	y = 2;
	int temp = x;
	x = y;
	y = temp;
	cout << "The value of x is: " << x << endl;
	cout << "The value of y  is: " << y << endl;
}
int main()
{
	int x;
	int y;
	Swapping(x, y);

}
