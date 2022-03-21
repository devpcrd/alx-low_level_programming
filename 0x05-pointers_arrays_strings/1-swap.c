#include "main.h"

/**
 * swap_int - swap ints
 *
 * @a: int a
 * @b: int b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
