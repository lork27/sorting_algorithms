#include "sort.h"

/**
 *insertion_sort_list - functions sort dlinked list
 *@list: doubly linked list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node, *current, *tmp;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node != NULL)
	{
		current = node;
		while (current->prev && current->prev->n > current->n)
		{
			tmp = current->prev;
			current->prev = tmp->prev;
			tmp->next = current->next;
			current->next = tmp;
			tmp->prev = current;
			if (tmp->next)
				tmp->next->prev = tmp;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;
			print_list(*list);
		}
		node = node->next;
	}
}
