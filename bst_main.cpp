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

	search( root, 3 );

	std::cout << std::endl;
	
	Leaf *test = find( root, 3 );

	test ? std::cout << "found leaf." : std::cout << "no leaf found.";

	if(test)
	{
		std::cout << test->value << " " << "left: " << test->left->value << " right: " << test->right->value << std::endl; 
	}

	return 0;
}
