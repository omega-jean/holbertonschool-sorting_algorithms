#include "sort.h"


/**
 * insertion_sort - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: double pointer
 *
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current, *prev_node;

	for (current = (*list)->next; current != NULL; current = current->next)
	{
		prev_node = current->prev;
		for (; prev_node != NULL && prev_node->n > current->n; prev_node = current->prev)
		{
			if (prev_node->prev != NULL)
				prev_node->prev->next = current;
			if (current->next != NULL)
				current->next->prev = prev_node;
			
			prev_node->next = current->next;
			current->prev = prev_node->prev;

			current->next = prev_node;
			prev_node->prev = current;

			if (current->prev == NULL)
				*list = current;

			print_list(*list);
		}
	}
}
