#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: double pointer to be tested
 * @idx: index
 * @n: integer to be tested
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *w;
	listint_t *rizz = (*head);

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (idx == 0)
	{
		w->next = *head;
		*head = w;
		return (w);
	}
	while (rizz && i < idx)
	{
		if (i == idx - 1)
		{
			w->next = rizz->next;
			rizz->next = w;
			return (w);
		}
		else
		{
			rizz = rizz->next;
			i++;
		}
	}
	return (NULL);
}
