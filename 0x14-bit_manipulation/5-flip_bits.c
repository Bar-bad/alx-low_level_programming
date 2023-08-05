#include "main.h"
/**
 * flip_bits - function that counts the number of bits to be changed
 * to get from one number to another
 * @n: the 1ST number
 * @m: the 2ND number
 *
 * Return: the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter, flipBit = 0;
	unsigned long int shift_current_val;
	unsigned long int or_result = n ^ m;

	for (counter = 63; counter >= 0; counter--)
	{
		shift_current_val = or_result >> counter;
		if (shift_current_val & 1)
			flipBit++;
	}

	return (flipBit);
}
