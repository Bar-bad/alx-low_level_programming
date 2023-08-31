#include "main.h"

/**
 * get_endianness - function that checks if a machine is little or big endian
 *
 * Return: If big, 0,
 * If little, 1
 */
int get_endianness(void)
{
	unsigned int loopCount = 1;
	char *charr = (char *) &loopCount;

	return (*charr);
}
