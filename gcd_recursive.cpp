#include <iostream>

int gcd(int a, int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main()
{
	int a, b = 0;
	std::cout << "Enter a: " << std::endl;
	std::cin >> a;
	std::cout << "Enter b: " << std::endl;
	std::cin >> b;
	std::cout << gcd(a,b);
	return 0;
}
