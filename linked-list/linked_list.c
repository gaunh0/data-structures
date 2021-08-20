#include <stdio.h>
#include <stdlib.h>


#include "linked_list.h"

// pass address of pointer head to change it
int addToHead(Node **head_ref, int data)
{
	Node* newNode = (Node *)malloc(sizeof(Node));
	if(newNode == NULL)
	{
		printf("Unable allocated a memory\n");
		return -1;
	}

	newNode->data = data;
	newNode->next = (*head_ref);

	(*head_ref) = newNode;
}

int addToLast(Node **head_ref, int data)
{	

	Node *temp = (Node *)malloc(sizeof(Node));
	Node *last = *head_ref;
	if(temp == NULL)
	{
		printf("Unable allocated a memory\n");
		return -1;
	}

	temp->data= data;
	temp->next = NULL;
	if(*head_ref == NULL)
	{

		(*head_ref) = temp;
		return 0;
	}

	while(last->next != NULL)
	{
		last = last->next;
	}

	last->next = temp;

	return 0;
	

}
int insertAfer(Node *prv_node, int data)
{
	if(prv_node == NULL)
	{
		printf("prv_node can't be NULL\n");
		return -1;
	}

	Node *temp = (Node *)malloc(sizeof(Node));
	if(temp == NULL)
	{
		printf("Unable allocated a memory\n");
		return -1;
	}

	temp->data = data;
	temp->next = prv_node->next;

	prv_node->next = temp;
}
int addAtPosition(Node **head_ref , int pos, int data)
{

	if(pos <= 0)
	{
		printf("Position must be greater than 0\n");
		return -1;
	}

	Node *temp = (Node *)malloc(sizeof(Node));
	if(temp == NULL)
	{
		printf("Unable allocated a memory\n");
		return -1;
	}

	temp->data = data;

	if(pos == 1)
	{
		temp->next = *head_ref;
		(*head_ref) = temp;

		return 0;
	}

	Node *pos_temp = *head_ref;
	for(int i = 1; i<pos-1; i++)
	{
		printf("%d \n", pos_temp->data);
		pos_temp= pos_temp->next;
	}

	temp->next = pos_temp->next;
	pos_temp->next = temp;

	return 0;


}


// delete
int removeAtLast(Node *head_ref)
{
	
	Node *temp = head_ref;
	while(temp->next->next!= NULL)
	{
		temp = temp->next;
	}

	temp->next= NULL;
	free(temp->next);

	return 0;
}
int removeAtHead(Node **head_ref)
{
	Node *temp = *head_ref;

	*head_ref = temp->next;

	free(temp);
	return 0;

}

int removeAtPosition(Node **head_ref , int pos)
{
	if(pos <= 0)
	{
		printf("Position must be greater than 0\n");
		return -1;
	}
	Node *temp = *head_ref;
	if(pos == 1)
	{

		*head_ref = temp->next;

		free(temp);

		return 0;
	}

	for(int i = 1; i< pos-1; i++)
	{

		temp=temp->next;
	}

	printf("%d ", temp->data);
	Node *pos_temp = temp->next->next;
	free(temp->next);
	temp->next = pos_temp;

	
	return 0;
}

// reverse

int reverseList(Node **head_ref)
{
	Node *current, *prev, *next;
	current = *head_ref;
	prev= NULL;

	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next; 
	}	

	*head_ref = prev;
	return 0;
}	



// print
int printList(Node *head_ref)
{
	Node *temp = NULL;
	if(head_ref == NULL)
	{
		printf("List is empty\n");
		return -1;
	}

	temp = head_ref;

	printf("List: ");
	while(temp!= NULL)
	{
		printf("%d ", temp->data );
		temp = temp->next;
	}
	printf("\n");
	return 0;
}

int print(Node *node)
{
	if(node == NULL)
	{
		printf("\n");
		return -1;
	}

	printf("%d ", node->data);

	print(node->next);
	return 0;
}


