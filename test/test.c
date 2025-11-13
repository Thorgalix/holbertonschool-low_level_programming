#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	struct dog ndog;

	ndog.name = "Théo";
	printf("%s\n", ndog.name);
}
