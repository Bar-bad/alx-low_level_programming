#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates `n` bytes of a string
 * to another string
 * @s1: the sting to append to
 * @s2: the string to concatenate from
 * @n: the number of bytes from string `s2` to be concatenated to string `s2`
 *
 * Return: a pointer to the resulting string of the concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatString;
	unsigned int counts1 = 0, counts2 = 0, lengthofs1 = 0, lengthofs2 = 0;

	while (s1 && s1[lengthofs1])
		lengthofs1++;
	while (s2 && s2[lengthofs2])
		lengthofs2++;

	if (n < lengthofs2)
		concatString = malloc(sizeof(char) * (lengthofs1 + n + 1));
	else
		concatString = malloc(sizeof(char) * (lengthofs1 + lengthofs2 + 1));

	if (!concatString)
		return (NULL);

	while (counts1 < lengthofs1)
	{
		concatString[counts1] = s1[counts1];
		counts1++;
	}

	while (n < lengthofs2 && counts1 < (lengthofs1 + n))
		concatString[counts1++] = s2[counts2++];
	while (n >= lengthofs2 && counts1 < (lengthofs1 + lengthofs2))
		concatString[counts1++] = s2[counts2++];

	concatString[counts1] = '\0';
	return (concatString);
}
