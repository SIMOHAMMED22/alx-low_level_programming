#include <stdio.h>
#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary form.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	while ((mask << 1) <= n)
		mask <<= 1;


	for (i = 0; mask > 0; mask >>= 1, i++)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}

	_putchar('\n');
}
