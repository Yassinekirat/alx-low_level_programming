#include "lists.h"

/**
* add_dnodeint_end - function that adds a new node at the end
* @head: A double pointer to the head of the doubly linked list.
* @n: The value to be stored in the new node.
*
* Return: Address of the new element, or NULL on failure.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (current->next)
	{
		current = current->next;
	}

	newNode->prev = current;
	current->next = newNode;

	return (newNode);
}
