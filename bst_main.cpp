#include <iostream>
#include <stack>
#include "bst_functions.h"

int main()
{
	Leaf* root = NULL;	
	
	int value = 0;

	while( value != -999 )
	{
		std::cin >> value;
		if(value != -999) insert(root, value);
	}

	inorder(root);

	std::cout << std::endl;

	inorder(root);

	return 0;
}
