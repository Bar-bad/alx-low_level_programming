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
	unsigned int count = 0;

	char_array = (char *)malloc(sizeof(char) * size);

	if (size == 0 || char_array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		char_array[count] = c;

	return (char_array);
}
