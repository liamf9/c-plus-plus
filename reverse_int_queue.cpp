#include <iostream>
#include <queue>

void build_queue(std::queue<int> &s, int num)
{
	while(num >= 1) {
		s.push(num % 10);
		num /= 10;
	}
}

int main()
{
	std::queue<int> s; 
	int num = 123045;
	
	build_queue(s,num);
	
	while(!s.empty())
	{
		std::cout << s.front();
		s.pop();
	}
	
	return 0;
}
