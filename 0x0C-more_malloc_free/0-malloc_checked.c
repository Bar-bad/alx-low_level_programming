#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the bumber of bytes to be allocated
 *
 * Return: a pointer to the memory that has been allocated
 */
void *malloc_checked(unsigned int b)
{
	void *Pointer;

	Pointer = malloc(b);

	if (Pointer == NULL)
		exit(98);

	return (Pointer);
}
