#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 *
 * @head: double pointer to be tested
 * @n: integer to be tested
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *j;

	i = malloc(sizeof(listint_t));
	if (!i)
	{
		return (NULL);
	}

	i->n = n;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	else
	{
		j = *head;
		while (j->next)
			j = j->next;

	j->next = i;
	}

	return (i);
}
