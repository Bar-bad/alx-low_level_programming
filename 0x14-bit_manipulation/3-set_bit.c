#include "main.h"
/**
 * set_bit - function that sets a bit at a given index to 1
 * @n: a pointer to the number to be changed
 * @index: the index of the bit to be set to
 *
 * Return: If it is successful, 1
 * If it fails, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
