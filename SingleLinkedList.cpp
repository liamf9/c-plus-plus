#include <iostream>
using namespace std;

/* Notes: Create argument vector and count for length of list. */

struct Node {
	int data;
	/* Node *prev; */
	Node *next;
};

int main()
{
	Node *list = new Node;
	Node *head = list;

	for (int i = 0; i < 10; i++)
	{
		list->data = i;
		list->next = new Node;
		list = list->next;
	}

	list->next = NULL;

	while (head->next != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}

	return 0;
}