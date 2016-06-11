struct Leaf {
	Leaf* left;
	Leaf* right;
	int value;
};

void insert( Leaf *&root, int val )
{
	Leaf *temp, *parent;
	if( root == NULL )
	{
		root = new Leaf;
		root->value = val;
		root->left = root->right = NULL;
		temp = root;
	} else {
		temp = root;
		while(temp!=NULL)
		{
			if( val < temp->value ) {
				parent = temp;
				temp = temp->left;
			} else {
				parent = temp;
				temp = temp->right;
			}
		}
		Leaf *node = new Leaf;
		node->value = val;
		node->left = node->right = NULL;

		if(val < parent->value) parent->left = node;
		else parent->right = node;
	}
}

void inorder(Leaf* &root)
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
