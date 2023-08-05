#include "main.h"
/**
 * get_endianness - function that checks if a machine is little or big endiaj
 *
 * Return: for big, 0
 * for little, 1
 */
int get_endianness(void)
{
	unsigned int count = 1;
	char *mem_address = (char *) &count;

	return (*mem_address);
}
