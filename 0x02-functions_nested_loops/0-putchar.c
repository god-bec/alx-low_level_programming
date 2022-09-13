#include <stdio.h>
/**
 * main - write a program tht prints putchar
 * Description: using main function
 * Return: 0
 *
 */
int main(void)
{
	char *sh = "Holberton";
	while (*sh)
	{
	putchar(*sh);
	sh++;
	}
	putchar('\n');
	return (0);
}
