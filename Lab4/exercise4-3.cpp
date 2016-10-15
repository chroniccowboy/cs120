//Ian Wood
//CS120 Section 3
//09//22/16

#include <iostream>
using namespace std;

int main()
{
	int numbers[99], sum;
	for(int i = 0; i <= 99; i++)
	{
		cin >> numbers[i];
		sum += numbers[i];
		if(numbers[i] == 0)
		{
			i = 99;
		}
	}
	cout << sum << endl;
}

