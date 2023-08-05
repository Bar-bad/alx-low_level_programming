#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: the string that contain the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int decimValue = 0;

	if (!b)
		return (0);

	for (counter = 0; b[counter]; counter++)
	{
		if (b[counter] < '0' || b[counter] > '1')
			return (0);

		decimValue = 2 * decimValue + (b[counter] - '0');
	}
	return (decimValue);
}
