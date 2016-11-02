#include <iostream>

int product(int n, int a)
{
	if(n == 1)
		return a;
	return a + product(n-1, a);
}

int main()
{
	std::cout << product(10,5) << std::endl;
	std::cout << product(11,6) << std::endl;
	std::cout << product(8,4) << std::endl;
}
