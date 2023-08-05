#include "main.h"
/**
 * print_binary - function that prints the binary equivalent
 * of a decimal number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int counter, printed_ones = 0;
	unsigned long int shifted_val;

	for (counter = 63; counter >= 0; counter--)
	{
		shifted_val = n >> counter;

		if (shifted_val & 1)
		{
			_putchar('1');
			printed_ones++;
		}

		else if (printed_ones)
			_putchar('0');
	}

	if (printed_ones)
		_putchar('0');
}
