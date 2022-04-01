#include "main.h"

/**
 * _isalpha - checks if input is alphacase
 * @c: variable to determine if input is alphacase
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int i;

	i = 0;

if (c >= 'a' && c <= 'z')
i = 1;
else if (c >= 'A' && c <= 'Z')
i = 1;
return (i);
}
