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
		s = malloc(sizeof(char) * (lengthofs1 + n + 1));
	else
		s = malloc(sizeof(char) * (lengthofs1 + lengthofs2 + 1));

	if (!s)
		return (NULL);

	while (counts1 < lengthofs1)
	{
		s[counts1] = s1[counts1];
		counts1;
	}

	while (n < lengthofs2 && counts1 < (lengthofs1 + n))
		s[counts1++] = s2[counts2++];
	while (n >= lengthofs2 && counts1 < (lengthofs1 + lengthofs2))
		s[counts1++ = s2[counts2++];

	s[counts1] = '\0';
	return (s);
}
