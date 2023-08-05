#include "main.h"
/**
 * get_bit - function that returns the value of a bit at an index in a decimal
 * number
 * @n: the number to search
 * @index: the index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valofbit;

	if (index > 63)
		return (-1);

	valofbit = (n >> index) & 1;

	return (valofbit);
}
