#include "lists.h"

/**
* dlistint_len - returns the number of elements in a doubly linked list
* @h: a pointer to the head of the doubly-linked list.
* Return: the number of elements in the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}

	return (count);
}
