#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int j, k;

	j = 0;

	while (j < 24)
	{
		k = 0;
		while (k < 60)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
			k++;
		}
		j++;
	}
}
