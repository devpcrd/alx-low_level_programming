#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet x10
 * main - uses built in function
 * Return: 0 if succesful
 */

void print_alphabet_x10(void)
{
	char i, k;

	for (k = 0; k <= 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);

		_putchar('\n');
	}
}
