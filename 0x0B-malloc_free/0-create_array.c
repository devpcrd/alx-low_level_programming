#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and init to char
 * @size: size of the array
 * @c: specific char init to
 * Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{

	char *p;

	int i;

	if (size == 0)
		return NULL;

	p = (char *)malloc(size * sizeof(char));

	if (p == 0)
		return NULL;

	for (i = 0; i < size; i++)
		p[i] = c;

	return p;

}
