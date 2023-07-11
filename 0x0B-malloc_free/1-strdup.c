#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that copies the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: a pointer to the copied string (Success),
 * NULL (Error)
 */
char *_strdup(char *str)
{
	char *duplicate_string;
	unsigned int a, string_length;

	a = 0;
	string_length = 0;

	if (str == NULL)
		return (NULL);

	while (str[string_length])
		string_length++;

	duplicate_string = malloc(sizeof(char) * (string_length + 1));

	if (duplicate_string == NULL)
		return (NULL);

	while ((duplicate_string[a] = str[a]) != '\0')
		a++;

	return (duplicate_string);
}
