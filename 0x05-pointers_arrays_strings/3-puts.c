#include "main.h"

/**
 * _puts - reset using pointer
 *
 * @str: int s
 *
 * Return: int
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
