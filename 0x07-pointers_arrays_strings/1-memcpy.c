#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory where bytes are stored
 * @src: memory where bytes are copied from
 * @n: number of bytes
 *
 * Return: the copied memory with `n` bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int a = n;

	for (; i < a; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
