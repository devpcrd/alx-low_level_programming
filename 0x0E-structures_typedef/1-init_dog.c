#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initialize the data structures
 *@d: pointer to the structure
 *@name: Dog name
 *@age: Dog age
 *@owner: Dog owner
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
