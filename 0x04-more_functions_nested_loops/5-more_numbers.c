#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int c, j;

	for (c = 1; c <= 10; c++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
