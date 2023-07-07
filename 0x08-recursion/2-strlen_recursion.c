#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int string_length = 0;

	if (*s)
	{
		string_length++;
		string_length += _strlen_recursion(s + 1);
	}

	return (string_length);
}
