#include "main.h"
/**
 * get_endianness - function tha checks if a machine is little or big endian
 * Return: For big, 0,
 * For little, 1
 * */
int get_endianess(void)
{
	char *bett = (char *) &lcount;
	unsigned int lcount = 1;

	return (*bett);
}
