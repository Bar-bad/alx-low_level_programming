#include "main.h"
/**
 * _strspn - fnction that gets the length of a prefix substring
 * @s: input(string to be chaecked)
 * @accept: input
 *
 * Return: number of bytes in the intitial segment of `s`
 * Always (0)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int k;

	while (*)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
			n++;
			break;
			}
			else if (accept[k + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
