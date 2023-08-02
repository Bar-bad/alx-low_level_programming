#include "function_pointers.h"
/**
 * int_index - fuction that returns index place if the comparison = true,
 * else -1
 * @array: a pointer to the integer array
 * @size: the number of elements in the array
 * @cmp: a pointer to the comparison function that takes an integer as an
 * argument and returns an integer
 * The comparison function should return a non-zero value if the target integer
 * is found.
 *
 * Return: If the target integer is found, it returns the index of the first
 * occurrence in the array.
 * If the target integer is not found or the input is invalid (NULL array,
 * non-positive size, or NULL cmp function),
 * it returns -1 to indicate the target integer was not found
 * or there was an error.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
			return (count);
	}
	return (-1);
}
