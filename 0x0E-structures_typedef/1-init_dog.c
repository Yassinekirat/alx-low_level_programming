#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize a variable of type struct
 *
 * @d: Pointer to struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
