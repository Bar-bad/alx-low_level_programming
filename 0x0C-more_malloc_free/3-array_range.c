#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: the minimum range of values stored
 * @max: the maximum range of values that are stored and the number of elements
 * of the array
 *
 * Return: a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *Pointer;
	int count, arraySize;

	if (min > max)
		return (NULL);

	arraySize = max - min + 1;

	Pointer = malloc(sizeof(int) * arraySize);

	if (Pointer == NULL)
		return (NULL);
	for (count = 0; min <= max; count++)
		Pointer[count] = min++;

	return (Pointer);
}
