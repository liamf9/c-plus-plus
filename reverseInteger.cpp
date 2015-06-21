#include <iostream>
#define NUMBER 2147483647 /* Largest unsigned 32-bit integer */
using namespace std;

int getLength(int num);

int main() {
	int number = NUMBER;
	int length = getLength(number);
	int reversed [length];
	int arrayCount = 0;
	int captured = NULL;

	while(number > 0) 
	{
		captured = number % 10;
		
		reversed[arrayCount++] = captured;
		
		number /= 10;
	}

	for (int i = 0; i < length; ++i) 
	{
		cout << reversed[i];
	}

	return 0;
}

int getLength(int num) {
	int digitCount = 0;
	
	while(num > 10) 
	{
		num /= 10;
		
		digitCount++;
		
		if (num <= 10) 
		{
			digitCount++;
		}
	}	

	return digitCount;
}