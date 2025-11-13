#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int l, i;

	for (l = 0; name[l] != '\0'; l++)
	;
	d->name = malloc(l + 1);
	for (i = 0; i <= l; i++)
	{
		d->name[i] = name[i];
	}

	for (l = 0; owner[l] != '\0'; l++)
	;
	d->owner = malloc(l + 1);
	for (i = 0; i <= l; i++)
	{
		d->owner[i] = owner[i];
	}

	d->age = age;
}
