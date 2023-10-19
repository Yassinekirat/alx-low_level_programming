#include "lists.h"
/**
 * free_list - Function that frees a list_t list
 *
 * @head: pointer to be tested
 *
 */
void free_list(list_t *head)
{
	list_t *p;

	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
