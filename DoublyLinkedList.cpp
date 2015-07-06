#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *prev;
	Node *next;
};

int main()
{
	Node *list = new Node;
	Node *head = list;
	/* list->prev Sentinel Node? */
	Node *tail = list->prev = NULL;

	for (int i = 0; i < 10; i++)
	{
		/* Set data and create a new Node */
		list->data = i;
		list->next = new Node;
		/* Set tail to current node */
		tail = list;
		/* Advance list */
		list = list->next;
		/* Set ->prev to tail, one node back */
		list->prev = tail;
	}

	/* Sentinel node? */
	list->next = NULL;

	while (head->next != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}

	cout << endl << endl;

	while (tail)
	{
		cout << tail->data << " ";
		tail = tail->prev;
	}

	return 0;
}