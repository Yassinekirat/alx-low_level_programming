#include "lists.h"

/**
* get_dnodeint_at_index - Returns the node at the given index
* in a doubly linked list.
* @head: A pointer to the head of the doubly linked list.
* @index: The index of the node to retrieve (starting from 0).
*
* Return: The node at the specified index, or NULL if not found.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}

	return (head);
}
