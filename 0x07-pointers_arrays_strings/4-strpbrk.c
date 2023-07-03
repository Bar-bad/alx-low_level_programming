#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input(sting to be cheched)
 * @accept: input(string where set of bytes are from)
 *
 * Return: pointer to the byte in `s` that matches one of the bytes in `accept`
 * Always (0)
 * Or `NULL` if no such byte is found
 */
char *_strpbrk(char *s, char *accept);
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	s++;
	}
	return ('\0');
}
