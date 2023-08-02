#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: one of the strings to concatenate
 * @s2: other string to conctenate
 *
 * Return: a pointer to the new string created (Success,
 * or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_string;
	unsigned int a = 0, b = 0, string_length1 = 0, string_length2 = 0;

	while (s1 && s1[string_length1])
		string_length1++;
	while (s2 && s2[string_length2])
		string_length2++;

	concat_string = malloc(sizeof(char) * (string_length1 + string_length2 + 1));
	if (concat_string == NULL)
		return (NULL);

	a = 0;
	b = 0;

	if (s1)
	{
		while  (a < string_length1)
		{
			concat_string[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (string_length1 + string_length2))
		{
			concat_string[a] = s2[b];
			a++;
			b++;
		}
	}
	concat_string[a] = '\0';

	return (concat_string);
}
