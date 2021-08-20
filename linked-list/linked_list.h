#ifndef LINKED_LIST_H
#define LINKED_LIST_H 


typedef struct Node
{
	int data;
	struct Node* next;
}Node;


// create and insert function

int addToHead(Node **head_ref, int data);
int addToLast(Node **head_ref, int data);
int insertAfer(Node *prv_node, int data);
int addAtPosition(Node **head_ref , int pos, int data);

// delete function
int removeAtHead(Node **head_ref);
int removeAtLast(Node *head_ref);
int removeAfer(Node *prv_node);
int removeAtPosition(Node **head_ref , int pos);

// reverse

int reverseList(Node **head_ref);

// prinf

int printList(Node *n);
int print(Node *node);

#endif