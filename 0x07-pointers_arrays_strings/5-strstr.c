#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: input(string to be checked)
 * @needle: input(substring to be located)
 *
 * Return: pointer to the beginning of the located substring,
 * Always (0)
 * Or `NULL` if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *string = haystack;
	char *substring = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*string == *substring && *substring != '\0')
		{
			string++;
			substring++;
		}

		if (*substring == '\0')
			return (haystack);
	}
	return (0);
}
