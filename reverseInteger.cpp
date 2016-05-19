#include <iostream>
#include <limits>
using namespace std;

int getLength(int num);

int main() {
	int number = numeric_limits<int>::max();
	int length = getLength(number);
	int reversed [length];
	int arrayCount = 0;
	int captured = 0;

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
		
		++digitCount;
		
		num <= 10 ? ++digitCount : digitCount;
	}	

	return digitCount;
}
