#include "main.h"
/**
 * get_bit - function that returns the value of a bit at an index in a
 * decimal no.
 * @n: the number that is to be searched for
 * @index: the index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValu;

	if (index > 63)
		return (-1);

	bitValu = (n >> index) & 1;

	return (bitValu);
}
