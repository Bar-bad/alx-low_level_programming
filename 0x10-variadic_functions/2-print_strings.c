#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - fucntion prints strings, followed by a new line
 * @separator: the string that is to be printed between strings
 * @n: the number of strings that are to be passed to the function
 * @...: a variable number of strings to be printed
 *
 * Description: its is not printed if the separator is NULL
 * (nil) is printed is one of the strings is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*
	 * create a variable 'stringAruments' of va_list type;
	 * used to access the variable arguments (strings)
	 */
	va_list stringArguments;
	/*
	 * create 'currentString', char pointer variable;
	 * used to hold the current string during each iteration
	 */
	char *currentString;
	/*
	 * create 'counter', unsigned integer variable;
	 * used to iterate through the loop
	 */
	unsigned int counter;
	/*
	 * intialize the 'stringArguments' variable,
	 * set it to point to the first variable argument (the first string)
	 * this has to be called before accessing the arguments with va_arg
	 */
	va_start(stringArguments, n);

	for (counter = 0; counter < n; counter++)
	{
		currentString = va_arg(stringArguments, char *);

		if (currentString == NULL)
			printf("(nil)");
		else
			printf("%s", currentString);

		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(stringArguments);
}
