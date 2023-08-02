#include <stdio.h>
#include <stdlib.h>
/**
 * printout_opcodes - function that prints its own opcodes
 * @myFunction: a const char
 * @theBytes: the bytes
 *
 * Return: Always 0 (Success)
 */
void printout_opcodes(const char *myFunction, int theBytes)
{
	const unsigned char *theopcodes = (const unsigned char *)myFunction;
	int count;

	for (count = 0; theopcodes[count] != '\0'; count++)
	{
		if (count == theBytes - 1)
		{
			printf("%02hx\n", theopcodes[count]);
			break;
		}
		printf("%02hx ", theopcodes[count]);
	}
}

/**
 * main - start of main function
 * @argc: the number of arguments
 * @argv: an array of the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int theBytes = atoi(argv[1]);

	if (theBytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	printout_opcodes((const char *)main, theBytes);
	return (0);
}
