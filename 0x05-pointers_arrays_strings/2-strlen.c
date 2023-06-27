#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string to be measured
 * Return: length of string
 */
int _strlen(char *s)
{
	int length_count = 0;

	while (*s != '\0')
	{
		length_count++;
		s++;
	}
	return (length_count);
}
