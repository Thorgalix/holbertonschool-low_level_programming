#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int main(void)
{
	dog_t ndog;

	ndog.name = "Théo";
	printf("%s\n", ndog.name);
}
