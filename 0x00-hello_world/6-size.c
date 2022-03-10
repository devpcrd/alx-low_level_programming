#include<stdio.h>

/**
* main - prints size of Data Types
*
* Description: Char, int, Long int, Long Long int, Float.
*
* Return: Always return 0 (Success)
*/

int main(void)
	{

		printf("Size of a char: %lu byte(s)\n", sizeof(char));
		printf("Size of an int: %lu byte(s)\n", sizeof(int));
		printf("Size of long int: %lu byte(s)\n", sizeof(long));
		printf("Size of long long int: %lu byte(s)\n", sizeof(long long));
		printf("Size of float: %lu byte(s)\n", sizeof(float));

		return (0);

	}
