#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - function that prints the result o simple operations
 * @argc: number of arguments that are supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int firstNumber, secondNumber;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	firstNumber = atoi(argv[1]);
	operator = argv[2];
	secondNumber = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(firstNumber, secondNumber));
	return (0);
}
