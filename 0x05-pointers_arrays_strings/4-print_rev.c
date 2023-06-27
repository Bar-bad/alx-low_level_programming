#include "main.h"
/**
 * print_rev - function that prints a string, in reverse, followed by a new line
 * written by faith_barn'etuny
 * @s: string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	int length_count = 0;
	int i;

	while (*s != '\0')
	{
		length_count++;
		s++;
	}
	s--;
	for (i = length_count; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
