#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a doubly linked list.
* @head: A pointer to a pointer to the head of the list.
* @n: The integer value to be stored in the new node.
*
* Return: Address of the new element, or NULL if allocation fails.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newElem = malloc(sizeof(dlistint_t));

	if (newElem == NULL)
		return (NULL);

	newElem->n = n;
	newElem->prev = NULL;
	newElem->next = *head;

	if (*head != NULL)
		(*head)->prev = newElem;

	*head = newElem;
	return (newElem);
}
