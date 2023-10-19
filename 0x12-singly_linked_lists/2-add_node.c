#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer to be tested
 * @str: pointer to be tested
 *
 * Return: the node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	size_t len = 0;

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	n->str = strdup(str);
	n->len = len;
	n->next = *head;
	*head = n;

	return (*head);
}
