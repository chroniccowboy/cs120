#include <iostream>

using namespace std;

int main()
{
	int nullInt;
	float nullFloat;
	cout << "An int with no value assigned: " << nullInt << endl;
	cout << "A float with no value assigned: " << nullFloat << endl;
	cout << "The float's value is 4.59163e-41 but the int's value changes each time the program is run." << endl;
	int largeInt = 10;
	cout << largeInt << endl;
	largeInt = largeInt*largeInt;
	cout << largeInt << endl;
	largeInt = largeInt*largeInt;
	cout << largeInt << endl;
	largeInt = largeInt*largeInt;
	cout << largeInt << endl;
	//largeInt = largeInt*largeInt;
	//cout << largeInt << endl;
	//largeInt = largeInt*largeInt;
	//cout << largeInt << endl;	
	
	float largeFloat = 100000000;
	cout << largeFloat << endl;
	cout << "It is possible for a float to have a value too large to hold." << endl ;
	cout << "The largest value an integar variable can correctly hold is: 2147483647"  << endl;
	return 0;
}
