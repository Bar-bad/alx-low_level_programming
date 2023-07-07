#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * is_it_digit - function that checks if in the string there is a digit
 * @str: string array
 *
 * Return: Always 0(Success)
 */
int is_it_digit(char *str)
{
	unsigned int counter;/*declare an iterator*/

	counter = 0;
	while (counter < strlen(str))
	{
		if (!isdigit(str[counter]))/*check if the character is not a digit*/
		{
			return (0);/*if a character that is not a digit is ound, return 0*/
		}
		counter++;
	}
	return (1);/*if ll the characters are digts, return 1*/
}

/**
 * main - function that prints the name of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int counter;
	int string_to_integer;
	int sum_result = 0;

	counter = 1;
	while (counter < argc)/*itrator, `counter` iterates through the argument*/
	{
		if (is_it_digit(argv[counter]))/*
* condition to check if the
* argument is valid
*/
		{
			string_to_integer = atoi(argv[counter]);/*
* convert the argument
* `string` character to an integer
*/
			sum_result += string_to_integer;/*add the integer to the resulting sum*/
		}

		else
		{
			printf("Error\n");/*
* print an error message if the argument is not a valid number
*/
			return (1);/*return 1 to show an error occurred*/
		}
		counter++;
	}
	printf("%d\n", sum_result);/*print out the resulting sum of positive numbers*/
	return (0);
}
