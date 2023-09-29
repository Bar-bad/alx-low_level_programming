#include "main.h"
/**
 * print_binary - function that prints the binary equivalent
 * of a decimal no.
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int lcount, counter = 0;
	unsigned long int varCurr;

	for (lcount = 63; lcount >= 0; lcount--)
	{
		varCurr = n >> lcount;

		if (varCurr & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
