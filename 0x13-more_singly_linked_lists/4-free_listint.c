#include "lists.h"

/**
 * free_listint - function that frees a list.
 *
 * @head: pointer to be tested
 *
 */

void free_listint(listint_t *head)
{
	listint_t *i;

	i = head;
	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
