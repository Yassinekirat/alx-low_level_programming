#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a linked list
 *
 * @head: pointer to be tested
 *
 * Return: if the list is empty, return 0, else total
 */

int sum_listint(listint_t *head)
{
	int total;

	total = 0;
	while (head)
	{
		total = total + head->n;
		head = head->next;
	}

	return (total);
}
