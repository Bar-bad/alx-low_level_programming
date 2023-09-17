#include "main.h"
/**
 * print_times_table - function that prints the `n`
 * times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int h, k, l;

	if (n >= 0 && n <= 15)
	{
		for (j = 0; j <= n; j++)
		{
			for (k = 0; k <= n; k++)
			{
				l = k * j;
				if (k == 0)
				{
					_putchar(l + '0');
				}
				else if (l < 10 && k != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(l + '0');
				}
				else if (l >= 10 && l < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((l / 100) + '0');
					_putchar(((l / 10) % 10) + '0');
					_putchar((l % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

