#include "main.h"
#include <stdlib.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the character to be copied
 * @n: number of times to copy the character b
 *
 * Return: a pointer to the memory area s to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of each element of the array
 *
 * Return: a pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	Pointer = malloc(size * nmemb);

	if (Pointer == NULL)
		return (NULL);

	_memset(Pointer, 0, nmemb * size);

	return (Pointer);
}
