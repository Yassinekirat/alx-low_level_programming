#include "lists.h"

/**
 * listint_len -  function function that returns the number
 * of elements in a linked list
 *
 * @h: pointer to be tested
 *
 * Return: size
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
