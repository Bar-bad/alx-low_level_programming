#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * (the function uses at most `n` bytes from `src`
 * written by faith_barng'etuny
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
