#include <stdio.h>
#include <stdlib.h>
#include "double_linked_list.h"

// insert

int insertAtHead(Node **head_ref, int data)
{
	Node *temp = (Node*)malloc(sizeof(Node));
	if(temp == NULL)
	{
		printf("Cant alocate the memory\n");
		return -1;
	}
	temp->data = data;

	if(*head_ref == NULL)
	{
		temp->next = NULL;
		temp->prev = NULL;
		*head_ref = temp;
		return 0;
	}

 	(*head_ref)->prev = temp;
	temp->next = *head_ref;
	temp->prev = NULL;
	*head_ref = temp;

	return 0;
}
int insertAtTail(Node **head_ref, int data)
{
	Node *temp = (Node*)malloc(sizeof(Node));
	if(temp == NULL)
	{
		printf("Cant alocate the memory\n");
		return -1;
	}
	temp->data = data;

	if(*head_ref == NULL)
	{
		temp->next = NULL;
		temp->prev = NULL;
		*head_ref = temp;
		return 0;
	}
	Node *head_tmp = *head_ref;
	while(head_tmp->next != NULL)
	{
		head_tmp= head_tmp->next;
	}

	temp->prev= head_tmp;
	temp->next = NULL;

	head_tmp->next = temp;

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
