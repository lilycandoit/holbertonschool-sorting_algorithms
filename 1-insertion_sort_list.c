#include "sort.h"
#include "stdio.h"


/**
 * swap - swap 2 nodes in a doubly linked list
 * @list: double pointer to the head of the list
 * @node1: pointer to first node
 * @node1: pointer to second node
 */

void swap(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (!list || !node1 || !node2 || node1 == node2)
		return;

	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2; /* node2 becomes head of the list */

	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	/* assign old version of node2->next to be node1->next now */
	node2->prev = node1->prev;
	/* assign old version of node1->prev to be node2->prev now */
	node1->prev = node2;
	node2->next = node1;
}

/**
 * insertion_sort_list - to sort a doubly linked list using Insertion sort
 * @list: double pointer to the head of the linked list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	/* if NULL list or the head of list is NULL or only one in array */
	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next; /* 2nd node, as 1st node is considered sorted */

	while (current)
	{
		temp = current;

		while (temp->prev && temp->n < temp->prev->n)
		{
			swap(list, temp->prev, temp);
			print_list(*list);
		}

		current = current->next;
	}
}

