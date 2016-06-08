#include <iostream>

template<typename T1, typename T2>
void print_data(const T1& a, const T2& b)
{
	std::cout << a << " " << b << std::endl;
}

int main()
{
	print_data(10, 100);
	print_data(14, 14.5);
	return 0;
}
