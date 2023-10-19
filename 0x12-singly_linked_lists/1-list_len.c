#include "lists.h"
/**
 * list_len - function that returns the number of elements in
 * a linked list.
 * @h: pointer to be tested
 * Return: length
*/
size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
