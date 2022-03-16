
#include "main.h"

/**
 * main - print _putchar()
 * Return: 0 if succesful
 */

int main(void)
{
	char *s = "_putchar";

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
		_putchar('\n');
		return (0);

}
