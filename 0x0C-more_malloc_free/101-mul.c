#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit - function that checks if a string contains a non-digit character
 * @s: the string that is to be evaluated
 *
 * Return: If a non-digit is found, 0
 * If otherwise, 0
 */
int is_digit(char *s)
{
	int count = 0;

	while (s[count])
	{
		if (s[count] < '0' || s[count] > '9')
			return (0);
		count++;
	}
	return (1);
}

/**
 * _strlen - function that returns the length of a string
 * @s: the string to be evaluated
 *
 * Return: the length of the evaluated string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * errors - functionthat handles the errors of main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - function that multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *string1, *string2;
	int lenstr1, lenstr2, lens1s2, count, carryOver;
	int digitstr1, digitstr2, *mult_result, zeroFlagtracker = 0;

	string1 = argv[1], string2 = argv[2];
	if (argc != 3 || !is_digit(string1) || !is_digit(string2))
		errors();
	lenstr1 = _strlen(string1);
	lenstr2 = _strlen(string2);
	lens1s2 = lenstr1 + lenstr2 + 1;
	mult_result = malloc(sizeof(int) * lens1s2);
	if (!mult_result)
		return (1);
	for (count = 0; count <= lenstr1 + lenstr2; count++)
		mult_result[count] = 0;
	for (lenstr1 = lenstr1 - 1; lenstr1 >= 0; lenstr1--)
	{
		digitstr1 = string1[lenstr1] - '0';
		carryOver = 0;

		for (lenstr2 = _strlen(string2) - 1; lenstr2 >= 0; lenstr2--)
		{
			digitstr2 = string2[lenstr2] - '0';
			carryOver += mult_result[lenstr1 + lenstr2 + 1] + (digitstr1 * digitstr2);
			mult_result[lenstr1 + lenstr2 + 1] = carryOver % 10;
			carryOver /= 10;
		}
		if (carryOver > 0)
			mult_result[lenstr1 + lenstr2 + 1] += carryOver;
	}
	for (count = 0; count < lens1s2 - 1; count++)
	{
		if (mult_result[count])
			zeroFlagtracker = 1;
		if (zeroFlagtracker)
			_putchar(mult_result[count] + '0');
	}
	if (!zeroFlagtracker)
		_putchar('0');
	_putchar('\n');
	free(mult_result);
	return (0);
}
