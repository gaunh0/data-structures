#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

typedef struct Node
{
	int data;
	struct Node * next;
	struct Node * prev;
}Node;

int insertAtHead(Node **head_ref, int data);
int insertAtTail(Node **head_ref, int data);
int print(Node *node);
#endif