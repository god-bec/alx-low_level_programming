#include "main.h"
/**
 * main - write a program tht prints putchar
 * Description: using main function
 * Return: 0
 *
 */
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n);
}
