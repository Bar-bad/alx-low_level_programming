#include "main.h"
/**
 * flip_bits - function that counts or tallies the no. of bits tobe changed
 * in order to get from one no. to another
 * @n: the 1ST no.
 * @m: the 2ND no.
 *
 * Return: the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int lcount, counter = 0;
	unsigned int valCurr;
	unsigned long int valExclu = n ^ m;

	for (lcount = 63; lcount >= 0; lcount--)
	{
		valCurr = valExclu >> lcount;
		if (valCurr & 1)
			counter++;
	}

	return (counter);
}
