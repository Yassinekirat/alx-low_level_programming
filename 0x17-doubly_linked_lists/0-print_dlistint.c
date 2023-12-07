#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: A pointer to the head of the doubly-linked list.
*
* Return: The number of elements in the list.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		counter++;
	}

	return (counter);
}
