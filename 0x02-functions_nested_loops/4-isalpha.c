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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
