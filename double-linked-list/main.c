#include <stdio.h>
#include <stdlib.h>
#include "double_linked_list.h"

int main()
{
	Node *head = NULL;
	insertAtHead(&head, 10);
	insertAtHead(&head, 2);
	insertAtHead(&head, 2);
	insertAtHead(&head, 4);
	insertAtHead(&head, 1);
	insertAtTail(&head, 5);;
	insertAtTail(&head, 3);;
	print(head);
	return 0;
}