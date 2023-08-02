#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that prints each array element on a new line
 * @array: a pointer to the integer array
 * @size: the size of the array
 * @action: a pointer tothe function that takes an integer as an argument
 *
 * Return: nothing (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	/*
	 * check if the array or the action function is NULL
	 * return early if any of them is null, since there is
	 * nothing to process
	 */
	if (array == NULL || action == NULL)
		return;

	/* iterate through each element of the array */
	for (count = 0; count < size; count++)
		/*
		 * call the action function with the current element of the array
		 * as an argument
		 * this way, the ation fuctions applied to each element of the array
		 */
		action(array[count]);
}
