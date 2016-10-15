#include <iostream>

using namespace std;

int main()
{
	double x, y; //declaring the input variables
	double  sum = 0,  average; //declaring two more variables
	
	cout << "Please enter a number: " << flush;
	cin >> x;
	cout << "Please enter another number: " << flush;
	cin >> y;
	sum = x + y; //calculate the sum of the inputs
	cout << "The sum of " << x << " plus " << y;
	cout << " is " << sum << ". "; //the spaces are not automatically put in so we must put them in manually
	
	average = sum/2.0; //calculate the average
	cout << "The average of your numbers is ";
	cout << average << ".";

	return 0;

}
