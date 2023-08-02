#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints its own opcodes
 * @argc: the number of arguments
 * @argv: an array of the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int theBytes, count;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	theBytes = atoi(argv[1]);

	if (theBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (count = 0; count < theBytes; count++)
	{
		if (count == theBytes - 1)
		{
			printf("%02hhx\n", array[count]);
			break;
		}
		printf("%02hhx", array[count]);
	}
	return (0);
}
