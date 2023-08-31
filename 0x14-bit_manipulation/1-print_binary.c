#include "main.h"

/**
 * print_binary - function that rints the binary equivalent of a decimal number
 * @n: the number that is to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int loopCount, counter = 0;
	unsigned long int bitCurr;

	for (loopCount = 63; loopCount >= 0; loopCount--)
	{
		bitCurr = n >> loopCount;

		if (bitCurr & 1)
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
