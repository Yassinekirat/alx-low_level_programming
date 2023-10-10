#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog staghfourllah
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: the name of the owner of the new dog
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if ((*new_dog).owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy((*new_dog).owner, owner);

	(*new_dog).age = age;

	return (new_dog);
}
