struct Leaf {
	Leaf* left;
	Leaf* right;
	int value;
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

		if( val < parent->value ) parent->left = leaf;
		else parent->right = leaf;
	}
}

void inorder(Leaf *&root)
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
			std::cout << root->value << " ";
			root = root->right;
		}
	}
}
