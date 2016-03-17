/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/
#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	int *flag, size = 0;
	flag = (int *)calloc(3, sizeof(int));
	temp = head;
	while (temp != NULL)
	{
		flag[temp->data]++;
		temp = temp->next;
		size++;
	}
	temp = head;
	while (temp != NULL)
	{
		if (flag[0] > 0)
		{
			flag[0]--;
			temp->data = 0;
		}
		else if (flag[1] > 0)
		{
			flag[1]--;
			temp->data = 1;
		}
		else
		{
			flag[2]--;
			temp->data = 2;
		}
		temp = temp->next;
	}
}