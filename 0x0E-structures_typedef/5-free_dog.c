#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - who let the dogs out
 *
 * @d: can i pet that dawg
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
