/* Counts the number of digits in a given number */
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

template <class T>
int digitCount(T number)
{
	int count = 0;

	while(number)
	{
		number /= 10;
		count++;
	}

	return count;
}

int main(int argc, char **argv)
{
	int count = 0;
	
	int c;
	
	while((c = getopt(argc, argv, "n:h")) != -1)
	{
		switch(c)
		{
			case 'n':
				count = atoi(optarg);
				cout << digitCount(count) << endl;
				break;
			case 'h':
				cout << "main.exe -n ###" << endl;
				break;
			default:
				cout << endl << "No argument passed." << endl;
				break;
		}
	}
	
	return 0;
}