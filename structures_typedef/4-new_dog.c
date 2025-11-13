#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (dog_t), or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
	return (NULL);

	ndog->name = strdup(name);
	ndog->owner = strdup(owner);

	if (ndog->name == NULL || ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	ndog->age = age;
	return (ndog);
}
