#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: integer parameters
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int ncopy;

	ncopy = n;

	if (n < 0)
	{
		_putchar('-');
		ncopy = -n;
	}

	if (ncopy / 10 != 0)
	{
	print_number(ncopy / 10);
	}
	_putchar((ncopy % 10) + '0');
}
