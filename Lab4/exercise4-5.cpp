//Ian Wood
//CS120 Section 3
//09/22/16

#include <iostream>
using namespace std;

int main()
{
	int numbers[99], sum = 0, count = 0;
	do
	{
		cin >> numbers[count];
		sum += numbers[count];
		if(numbers[count] == 0)
		{
			count = 99;
		}
		count++;
	}while(count <= 99);
	cout << sum << endl;
}
