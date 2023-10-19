#include "lists.h"
/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to be tested
 * Return: length
*/
size_t print_list(const list_t *h)
{
const list_t *p;
size_t len;

	p = h;
	len = 0;
	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%u] %s\n", p->len, p->str);
		}
		p = p->next;
		len++;
	}
	return (len);
}
