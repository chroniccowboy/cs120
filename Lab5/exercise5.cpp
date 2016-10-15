//Ian Wood
//CS120 Section 03
//09/29/16

#include <iostream>
using namespace std;

int getNumbers(), multiplyNumbers(int x, int y);
void printNumber(int product);

int main()
{
	int firstInput, secondInput, productInput;
	cout << "Getting the first number" <<endl;
	firstInput = getNumbers();
	cout << "Getting the second number" <<endl;
	secondInput = getNumbers();
	productInput = multiplyNumbers(firstInput, secondInput);
	printNumber(productInput);
}

int getNumbers()
{
	int input;
	bool gotDigit = true;
	do
	{
		cout << "Enter a number: ";
		cin >> input;
		if(std::isdigit(input))
		{
			gotDigit = false;
		}
		
	}while(gotDigit == false || input < 0);
	return input;
}

int multiplyNumbers(int x, int y)
{
	int product;
	product = x * y;
	return product;
}

void printNumber(int product)
{
	cout << "The product of your numbers is: " << product << "."; 
}
