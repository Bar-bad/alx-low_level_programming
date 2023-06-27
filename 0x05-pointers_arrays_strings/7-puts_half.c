#include "main.h"
/**
 * puts_half - function that prints half of a string
 * if the number of characters is odd,
 * function prints the last n characters of the string
 * where n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: half of input string
 */
void puts_half(char *str)
{
	int i, n, length_count;

	length_count = 0;

	for (i = 0; str[i] != '\0'; i++)
		length_count++;

	n = (length_count / 2);

	if ((length_count % 20 == 1))
			n = ((length_count + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
