//Ian Wood
//CS120 Section 3
//09/22/16

#include <iostream>
using namespace std;

int main()
{
	cout << "\t";
	for(int h = 0; h <= 9; h++)
	{
		cout << h << "\t";
	} 
	for(int i = 40; i <= 110; i+=10)
	{
		cout << "\n"  << i << "\t";
		for(int j = 0; j <= 9; j++)
		{
			if(j == 9)
			{
				cout << static_cast<char>(j+i) << "\n";
			}
			else
			{
				cout << static_cast<char>(j+i) << "\t";
			}
		}
	}
	return 0;
}
