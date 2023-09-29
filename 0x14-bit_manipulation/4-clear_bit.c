#include "main.h"
/**
 * clear_bit - function that sets the value of a given bit to 0
 * @n: a pointer to the number that is to be changed
 * @index: the index of the bit that is to be cleared
 *
 * Return: For success, 1,
 * For failure, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
