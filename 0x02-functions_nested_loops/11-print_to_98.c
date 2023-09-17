#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 * followed by a new line
 * @n: number to start printing from
 */
void print_to_98(int n)
{
	int j, k;

	if (n <= 98)
	{
		for (j = n; j <= 98; j++)
		{
			if (j != 98)
				printf("%d,", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
	else if (n >= 98)
	{
		for (k = n; k >= 98; k--)
		{
			if (k != 98)
				printf("%d,", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	}
}
