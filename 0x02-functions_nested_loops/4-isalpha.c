#include "main.h"

/**
 * _ishigher - checks if input is highercase
 * @c: variable to determine if input is highetcase
 * main - check the code.
 *
 * Return: Always 0.
 */
int _ishigher(int c)
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
