#include "main.h"
/**
 * _atoi - function that converts a string to an integer
 * @s: pointer to convert
 * Return: an integer
 */
int _atoi(char *s)
{
	int i, a, b, length, j, number = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && j == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			number = s[i] - '0';
			if (a % 2)
				number = -number;
			b = b * 10 + number;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}
	if (j == 0)
		return (0);
	return (b);
}
