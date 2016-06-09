#include <iostream>
#include <stack>

struct Leaf {

	Leaf* parent;
	Leaf* left;
	Leaf* right;

	int data;

};

void print_tree(Leaf* &root)
{
	std::stack<Leaf*> s;
	while(!s.empty() || root != NULL)
	{
		if(root != NULL)
		{
			s.push(root);
			root = root->left;
		} else {
			root = s.top();
			s.pop();
			std::cout << root->data << std::endl;
			root = root->right;
		}
	}
}

int main()
{
	Leaf* tree = new Leaf;
	Leaf* zero = new Leaf;
	zero->data = 0;
	Leaf* one = new Leaf;
	one->data = 1;
	Leaf* two = new Leaf;
	two->data = 2;
	Leaf* three = new Leaf;
	three->data = 3;

	//Prep stuff manually build an arbitrary tree
	one->left = zero;
	zero->left = NULL;

	tree = two;

	tree->parent = NULL;

	tree->left = one;
	tree->right = three;
	
	print_tree(tree);

	return 0;
}
