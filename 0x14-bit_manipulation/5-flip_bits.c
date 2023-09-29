#include "main.h"
/**
 * flip_bits - functionthat counts the number of bits to be changed
 * in order to get from one no. to another
 * @n: the 1ST no.
 * @m: the 2ND no.
 *
 * Return: the no. of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int lcount, counter = 0;
	unsigned long int valCurr;
	unsigned long int valExclu = n ^ m;

	for (lcount = 63; lcount >= 0; lcount--)
	{
		valCurr = valExclu >> lcount;
		if (valCurr & 1)
			counter++;
	}
	return (counter);
}
