#include "main.h"
/**
 * get_endianness - function that checks if a machine is big or litle endian
 *
 * Return: For big, 0,
 * For little, 1
 */
int get_endianness(void)
{
	unsigned int lcount = 1;
	char *bett = (char *) &lcount;

	return (*bett);
}
