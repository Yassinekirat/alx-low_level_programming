#include "lists.h"

/**
 * reverse_listint -  function that reverses a linked list
 *
 * @head: double pointer to be tested
 *
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = (*head);
		*head = n;
	}
	*head = p;
	return (*head);
}
