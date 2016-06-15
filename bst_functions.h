#include <stack>

struct Leaf {
	int value;
	Leaf* left;
	Leaf* right;
};

void insert(Leaf *&root, int val)
{
	Leaf *current, *parent;
	if( root == NULL ) {
		root = new Leaf;
		root->value = val;
		root->left = root->right = NULL;
		current = root;
	} else {
		current = root;
		while( current != NULL ) {
			if( val < current->value ) {
				parent = current;
				current = current->left;
			} else {
				parent = current;
				current = current->right;
			}
		}

		Leaf *leaf = new Leaf;
		leaf->value = val;
		leaf->left = leaf->right = NULL;

		val < parent->value ? parent->left = leaf : parent->right = leaf;
	}
}

void inorder(Leaf *&root)
{
	Leaf *original = root;
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
			std::cout << root->value << " ";
			root = root->right;
		}
	}
	root = original;
}

int search(Leaf *&root, int value)
{
	Leaf *current = root;
	bool found = false;
	while (!found && current)
	{
		if (value < current->value) current = current->left;
		else if (value > current->value) current = current->right;
		else if (value == current->value) { 
			std::cout << "found: " << current->value;
			found = true;
		}
	}
}
