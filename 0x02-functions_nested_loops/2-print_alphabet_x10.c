#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase
 * Return: void
 *
 */
void print_alphabet(void)
{
	char ch;
	int n = 0;
	
	while (n < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		n++;
	}
}
