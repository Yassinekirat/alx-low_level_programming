#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer to be tested
 * @str: pointer to be tested
 *
 * Return: the node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *p;

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		return (NULL);
	}

	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}

	n->len = strlen(str);
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
	}
	else
	{
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = n;
	}

	return (n);
}
