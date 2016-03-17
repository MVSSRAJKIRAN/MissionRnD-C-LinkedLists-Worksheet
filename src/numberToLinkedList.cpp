/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/
#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N)
{
	struct node* temp, *root = NULL;
	if (N == 0)
	{
		temp = (struct node*)malloc(1 * sizeof(struct node));
		temp->num = 0;
		temp->next =root;
		root = temp;
	}
	else{
		if (N<0)
		{
			N = N*-1;
		}
		while (N)
		{
			temp = (struct node*)malloc(1 * sizeof(struct node));
			temp->next = root;
			temp->num = N % 10;
			N = N / 10;
			root = temp;
		}
	}

	return root;
}