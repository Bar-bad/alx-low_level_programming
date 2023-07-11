#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars
 * and intializes it with a specific char
 * @size: the size of the array to create
 * @c: the char to initialize he array c
 *
 * Return: a pointer to the array (Success),
 * Null (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int a = 0;

	if (size == 0)
		return (NULL);

	char_array = (char *)malloc(sizeof(cgar) * size);

	if (char_array == NULL)
		return (0);

	while (a < size)
	{
		*(char_array + a) = c;
		a++;
	}

	*(char_aray + a) = '\0';

	return (char_array);
}
