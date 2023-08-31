#include "main.h"

/**
 * get_bit - function that returns the value of a bit at an index
 * in a decimal number
 * @n: the number that is searched for
 * @index: the index of the bit
 *
 * Return: the value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valueofBit;

	if (index > 63)
		return (-1);

	valueofBit = (n >> index) & 1;

	return (valueofBit);
}
