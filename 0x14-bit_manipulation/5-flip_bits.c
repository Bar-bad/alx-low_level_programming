#include "main.h"

/**
 * flip_bits - function that counts the number of bits that are to be changed
 * to get from one number to another
 * @n: the 1ST number
 * @m: the 2ND number
 *
 * Return: the number of buts that are to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int loopCount, counter = 0;
	unsigned long int bitCurr;
	unsigned long int excl_op = n ^ m;

	for (loopCount = 63; loopCount >= 0; loopCount--)
	{
		bitCurr = excl_op >> loopCount;
		if (bitCurr & 1)
			counter++;
	}

	return (counter);
}
