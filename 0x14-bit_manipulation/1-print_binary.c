#include "main.h"
/**
* print_binary - print binary using bitwise operator
* @n: number to print to binary
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		recursiveb(n);
}
/**
* recursiveb - recursively print binary
* @n: number to print to binary
*/
void recursiveb(unsigned long int n)
{
	if (n > 1)
		recursiveb(n >> 1);
	putchar((n & 1) + '0');
}
