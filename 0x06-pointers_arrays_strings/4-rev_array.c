#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: number of elements of te array of integers
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; i < n--; i++)
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
