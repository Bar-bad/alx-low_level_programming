#include "main.h"

/**
 * set_bit - function that sets a bit at a given index to 1
 * @n: a pointer to the number to be changed
 * @index: the index of the bit that is to be set to 1
 *
 * Return: If succesful, 1
 * If a failure, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
