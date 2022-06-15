#include "sort.h"

/**
* insertion_sort_list - insert sorts a list
* @list: the list.
* Return: void.
**/

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *tmp = NULL;
	listint_t *last = NULL;

	if (list == NULL)
		return;
	current = (*list)->next;
	tmp = current;

	while (current != NULL)
	{
		current = current->next;
		if (tmp->n < tmp->prev->n)
		{
			while (tmp->prev != NULL && tmp->n < tmp->prev->n)
			{
				last = tmp->prev;
				last->next = tmp->next;
				if (last->prev != NULL)
					last->prev->next = tmp;
				if (tmp->next != NULL)
					tmp->next->prev = last;
				tmp->prev = last->prev;
				last->prev = tmp;
				tmp->next = last;
				if (tmp->prev == NULL)
					(*list) = tmp;
				print_list(*list);
			}
		}
		tmp = current;
	}
}
