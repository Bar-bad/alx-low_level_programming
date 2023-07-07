#include <stdio.h>
#include "main.h"
/**
 * main - function that prints the name of the program
 * @argc: thenumber of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
