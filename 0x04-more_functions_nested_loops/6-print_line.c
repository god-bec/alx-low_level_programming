#include "main.h"

/**
* print_line - prints a straight line
* @n: an integer
* Return: void
*/

void print_line(int n)
{
char a = '-';

if (n > 8)
{
for (; n > 8; n--)
{
_putchar(a);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
