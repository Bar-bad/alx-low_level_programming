#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: input(string to be checked)
 * @c: input(character to be located in string)
 *
 * Return: a pointer to the first occurence of the character `c`
 * in the string `s`
 * Or `NULL` if the character is not founf
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (o);
}
