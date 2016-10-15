//Ian Wood
//CS120 Section 03
//09/15/2016

#include <iostream>

using namespace std;

int main()
{
	int int1, int2;
	cout <<"Please enter an integer: ";
	cin >> int1;
	cout << "" <<endl;
	cout << "Please enter another integer: ";
	cin >> int2;
	cout << "" << endl;
	if(int1 > int2)
	{
		cout << int1 << " is bigger than " << int2 << endl;	
	}
	if(int2 > int1)
	{
		cout << int2 << " is bigger than " << int1 << endl;
	}
	if(int1 == int2)
	{
		cout << int1 << " and " << int2 << " are the same number." << endl;
	}
}

