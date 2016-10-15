//Ian Wood
//CS120 Section 3
//09/22/16

#include <iostream>
using namespace std;

int main()
{
	int numbers[4];
	int sum = 0;
	for(int i = 0; i <= 4; i++)
	{
		cin >> numbers[i];
		sum += numbers[i];
	}
	cout << sum << endl;
}
