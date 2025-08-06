#include "sort.h"

/**
*insertion_sort_list -sorts a doubly linked list of integers in ascending order
*@list: the list
*Return: Nothing
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *insert, *before;

	if (*list == NULL || list == NULL || (*list)->next == NULL)
		return;
	tmp = (*list)->next;
	while (tmp != NULL)
	{
		if (tmp->n < tmp->prev->n)
		{
			insert = tmp;
			while (insert->n < insert->prev->n  && insert->prev->prev != NULL)
			{
				before = insert->prev;
				if (insert->next == NULL)
				{
					before->next = NULL;
					insert->prev = before->prev;
					before->prev->next = insert;
					before->prev = insert;
					insert->next = before;
				}
				else
				{
					before->next = insert->next;
					insert->prev = before->prev;
					before->prev->next = insert;
					insert->next->prev = before;
					before->prev = insert;
					insert->next = before;
				}
					print_list(*list);

			}
			if (insert->prev->prev == NULL && insert->prev != NULL)
			{
				before = insert->prev;
				before->next = insert->next;
				insert->next->prev = before;
				insert->prev = NULL;
				insert->next = before;
				before->prev = insert;
				*list = insert;
				print_list(*list);
			}
		}
		tmp = tmp->next;
	}
}
