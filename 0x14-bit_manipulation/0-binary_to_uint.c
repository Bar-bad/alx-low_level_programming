#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: the string that contains the binary number to be converted
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int loopCounter;
	unsigned int decimValue = 0;

	if (!b)
		return (0);

	for (loopCounter = 0; b[loopCounter]; loopCounter++)
	{
		if (b[loopCounter] < '0' || b[loopCounter] > '1')
			return (0);
		decimValue = 2 * decimValue + (b[loopCounter] - '0');
	}

	return (decimValue);
}
