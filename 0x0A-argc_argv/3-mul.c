#include <stdio.h>
#include "main.h"
/**
 * _atoi - function that converts a string into an integer
 * @s: the string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, string_length, k, num;

	a = 0;
	b = 0;
	c = 0;
	string_length = 0;
	k = 0;
	num = 0;

	while (s[string_length] != '\0')
		string_length++;

	while (a < string_length && k == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			k = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			k = 0;
		}
		a++;
	}
	if (k == 0)
		return (0);
	return (c);
}

/**
 * main - function that multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int mult_result, number1, number2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);
	mult_result = number1 * number2;

	printf("%d\n", mult_result);

	return (0);
}
