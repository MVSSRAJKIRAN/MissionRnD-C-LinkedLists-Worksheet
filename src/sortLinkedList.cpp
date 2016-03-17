/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/
#include <stdio.h>
void swap(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head == NULL || head->next == NULL)
		return head;
	else
	{
		struct node *temp1 = head, *temp2 = head;
		while (temp1 != NULL)
		{
			temp2 = head;
			while (temp2 != NULL)
			{
				if (temp2->num>temp1->num)
					swap(&(temp2->num), &(temp1->num));
				temp2 = temp2->next;
			}
			temp1 = temp1->next;
		}
		return head;
	}
}