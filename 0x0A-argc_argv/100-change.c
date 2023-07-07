#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function that prints the minimum number of coins to
 * make change for an amount of money
 * @argc:the numbe rof arguments
 * @argv: the array of arguments
 *
 * Return: 0 (Success),
 * 1 (Error)
 */
int main(int argc, char *argv[])
{
	int number, k, change_result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	change_result = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && number >= 0; k++)
	{
		while (number >= coins[k])
		{
			change_result++;
			number -= coins[k];
		}
	}
	printf("%d\n", change_result);
	return (0);
}
