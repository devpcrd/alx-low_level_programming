#include "main.h"

/**
 * rev string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void rev_string(char *s)
{
int i;
char can;
char tmp;

int l = strlen(str):
can = *str;
int lind, rind;
lind= 0;
rind = l - 1;

for (i = lind; i < rind; i++) {
tmp = str[i];
str[i] = str[rind];
str[rind] = tmp;
rind--;
_putchar('\n');
}
