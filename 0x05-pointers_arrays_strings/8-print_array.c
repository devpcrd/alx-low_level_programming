#include "main.h"
#include <stdio.h>
/**
 * print_array - prints every element of an array
 * @a: array
 * @n: length of array
 */

void print_array(int *a, int n)
{
	int count;

	count = 0;

	while (count < n)
	{
		if (count != (n - 1))
			printf("%i, ", a[count]);
		else
			printf("%i", a[count]);
		count++;
	}
	printf("\n");
}
