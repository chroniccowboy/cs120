//Ian Wood
//CS120 Section 3
//Lab 7
//10/13/2016
#include <iostream>
using namespace std;

void printArray(int arrayToPrint[25]);
int sumOfArray(int arrayToSum[25]);
float averageOfArray(int sumOfArray);

int main()
{
  int myArray[25];
  for(int i = 0; i <= 24; i++)
    {
      cout << "Please enter an integer: ";
      cin >> myArray[i];
    }
  printArray(myArray);
  int sum = sumOfArray(myArray);
  cout << "The sum of the array is: " << sum << "."  << endl;
  float average = averageOfArray(sum);
  cout << "The average number of the array is: " << average << "." << endl;
  cout << "The 10000th element is: " << myArray[10000] << endl;
  return 0;

  while(1) 
   return 0;
}

void printArray(int arrayToPrint[25])
{
  for(int j = 0; j <= 24; j++)
    {
      cout << arrayToPrint[j] << endl;
    }
}

int sumOfArray(int arrayToSum[25])
{
  int sum = 0;
  for(int k = 0; k <= 24; k++)
    {
      sum += arrayToSum[k];
    }
  return sum;
}

float averageOfArray(int sum)
{
  float average = (float)sum / 25;
  return average; 
}
