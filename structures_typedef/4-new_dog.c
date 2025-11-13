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
	int l, i;

	dog_t *ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
	return (NULL);

	for (l = 0; name[l] != '\0'; l++)
	;
	ndog->name = malloc(l + 1);
	for (i = 0; i <= l; i++)
	{
		ndog->name[i] = name[i];
	}

	for (l = 0; owner[l] != '\0'; l++)
	;
	ndog->owner = malloc(l + 1);
	for (i = 0; i <= l; i++)
	{
		ndog->owner[i] = owner[i];
	}

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
