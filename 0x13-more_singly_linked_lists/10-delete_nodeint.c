#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a linked list
 *
 * @head: double pointer to be tested
 * @index: index to be tested
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *w;
	listint_t *rizz;

	w = (*head);
	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = w->next;
		free(w);
		return (1);
	}
	while (i != index)
	{
		if (!w)
			return (-1);
		rizz = w;
		i++;
		w = w->next;
	}

	rizz->next = w->next;
	free(w);
	return (1);
}
