#include <iostream>

struct Node {
	int data;
	Node *next;
};

void insertData(Node* &current, int data)
{
	current->data = data;
	current->next = new Node;
	current = current->next;
}

int main()
{
	Node *list = new Node;
	Node *head = list;

	int data = 0;
	char answer = 'y';

	while(answer == 'y')
	{
		std::cout << "enter data: ";
		std::cin >> data;

		insertData(list,data);

		std::cout << "again: ";
		std::cin >> answer;
	}	

	list->next = NULL;

	while(head->next != NULL)
	{
		std::cout << head->data << " ";
		head = head->next;
	}

	return 0;
}
