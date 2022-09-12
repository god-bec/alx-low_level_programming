#include <stdio.h>



/**
 * main - print the string in the printf function
 *
 * Description: using the main function
 * this program prints "Write a C program that prints the size of various types on the computer it is compiled and run on"
 * Return: 0
 */

int main(void)

{

	char i;
	int c;
	float d;

printf("print size of char:%lu. \n",(unsigned long)sizeof(i));
printf("print size of int:%lu. \n",(unsigned long)sizeof(c));
printf("print size of float:%lu. \n",(unsigned long)sizeof(d));
return (0);

}
