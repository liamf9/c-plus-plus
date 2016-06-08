#include <iostream>

template<typename T1>
struct Node {
	T1 data;
	Node *next;
};

template<typename T2>
void insertData(Node* &current, const T2& data)
{
	current->data = data;
	current->next = new Node;
	current = current->next;
}

template<typename T3>
int main()
{
	Node *list = new Node;
	Node *head = list;

	T3 data = NULL;
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
