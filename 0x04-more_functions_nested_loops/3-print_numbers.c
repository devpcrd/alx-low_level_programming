#include "main.h"
#include <stdio.h>

/**
 * print_numbers - check the code.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
}
