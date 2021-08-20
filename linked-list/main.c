#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

Node *head ;


int main()
{
	// addToLast(&head, 55);
	// addToLast(&head, 23);
	addToLast(&head, 33);
	addToHead(&head, 22);
 
	// insertAfer(head->next, 77);

	addAtPosition(&head, 2, 33);
	removeAtLast(head);


	printList(head);
	reverseList(&head);
	//removeAtPosition(&head, 3); 
	print(head);

	return 0;
}
