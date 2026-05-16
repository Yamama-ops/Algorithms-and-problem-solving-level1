
#include <iostream>
using namespace std;

int main()
{
	int D;
	const  double PI = 3.14;
	cout << "Enter diameter" << endl;
	cin >> D;
	double Area = (PI * D) / 4;
	cout << "The area of circle is: " << Area << endl;
	return 0;
}

