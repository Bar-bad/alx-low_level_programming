#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input
 * @size: input
 *
 * Return: Always ()
 */
void print_diagsums(int *a, int size)
{
	int diag_sum1, diag_sum2, i;

	diag_sum1 = 0;
	diag_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		diag_sum1 = diag_sum1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		diag_sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", diag_sum1, diag_sum2);
}
