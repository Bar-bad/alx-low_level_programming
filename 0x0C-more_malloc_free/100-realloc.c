#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: : a pointer to the memory that was previously allocated by malloc
 * @old_size: the size of the memory allocated for ptr
 * @new_size: the new size of the new block of memory
 *
 * Return: a pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;
	char *prevPointer;
	unsigned int count;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);

	prevPointer = ptr;

	if (new_size < old_size)
	{
		for (count = 0; count < new_size; count++)
			pointer1[count] = prevPointer[count];
	}

	if (new_size > old_size)
	{
		for (count = 0; count < old_size; count++)
			pointer1[count] = prevPointer[count];
	}

	free(ptr);
	return (pointer1);
}
