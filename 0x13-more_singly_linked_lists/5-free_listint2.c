#include "lists.h"

/**
 * free_listint2 - function that frees a list
 *
 * @head: pointer to be tested
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
	}
	*head = NULL;
}
