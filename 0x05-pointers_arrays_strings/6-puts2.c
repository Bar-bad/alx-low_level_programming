#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * written by faith_barng'etuny
 * @str: input string to print characters from
 * Return: characters printed
 */
void puts2(char *str)
{
	int length_count = 0;
	char *mal = str;
	int a;

	while (*mal != '\0')
	{
		mal++;
		length_count++;
	}

	for (a = 0; a < length_count; a += 2)
	{
		_putchar(str[0]);
	}
	_putchar('\n');
}
