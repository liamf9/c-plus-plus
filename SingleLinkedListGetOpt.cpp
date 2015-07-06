#include <iostream> /* input/output */
#include <stdlib.h> /* atoi() */
#include <unistd.h> /* getopt stuff */
using namespace std;

struct Node {
	int data;
	Node *prev;
	Node *next;
};

int main(int argc, char **argv)
{
	int length = 0; /* set a default value */
	int opterr = 0;
	int c;

	while((c = getopt(argc, argv, "c:h")) != -1)
	{
		switch(c)
		{
			case 'c':
				length = atoi(optarg);
				break;
			case 'h':
				cout << "SingleLinkedListGetOpt.exe -c <integer>" << endl;
				cout << "Output <integer> consecutive numbers, starting at 0." << endl;
				break;
			case '?':
				cout << "Requires -c <integer>" << endl;
				break;
			default:
				cout << endl << "No arguments passed.  See -h for help." << endl;
				break;
		}
	}

	Node *list = new Node;
	Node *head = list;

	for (int i = 0; i < length; i++)
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