#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: Dog details
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog Owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog **p = &d;

	(**p).name = name;
	(**p).age = age;
	(**p).owner = owner;
}
