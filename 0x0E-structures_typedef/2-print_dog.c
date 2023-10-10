#include <stdio.h>
#include "dog.h"

/**
 * print_dog - shows the dog identity
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age));
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
