#include <iostream>
using namespace std;
int main()
{

		int mark1, mark2, mark3;

		cout << "Please enter the first mark" << endl;
		cin >> mark1;
		cout << "Please enter the second mark" << endl;
		cin >> mark2;
		cout << "Please enter the third mark" << endl;
		cin >> mark3;
		cout << "Your mar;s are" << endl;
		cout << "The first mark: " << mark1 << endl;
		cout << "The second mark: " << mark2 << endl;
		cout << "The third mark: " << mark3 << endl;
		double Average = (mark1 + mark2 + mark3) / 3;
		cout << "The average is: " << Average << endl;
		return 0;
	
}

