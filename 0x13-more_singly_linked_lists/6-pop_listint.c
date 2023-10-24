#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 *
 * @head: pointer to be tested
 *
 * Return: if the linked list is empty return 0 else value
 */

int pop_listint(listint_t **head)
{
	listint_t *i;
	int v;


	if (!(*head))
	{
		return (0);
	}
	if (!head)
	{
		return (0);
	}

	v = (*head)->n;
	i = (*head)->next;
	free(*head);
	*head = i;

	return (v);
}
