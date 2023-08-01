#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string that is to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: a varible number of numbers that are to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers; /*
			  * create a variable 'numbers' of va_list type;
			  * used to access the variable arguments
			  */
	unsigned int counter;
	 /*
	  * create a variable of unsigned integer type;
	  * used to iterate through the loop
	  */
	va_start(numbers, n);

	for (counter = 0; counter < n; counter++)
	{
		/*
		 * fetch next argument from numbers; assume he argument is an int
		 * use the %d format specifier to print the integer value to the console
		 */
		printf("%d", va_arg(numbers, int));

		/*
		 * check for two conditions;
		 * is the current index not the last index (index != (n - 1)) and
		 * has a separator been provided (separator != NULL)
		 * the separator string is printed after the number
		 * if both conditions are true
		 */
		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	/*
	 * to move the cursor to the next line, add a newline character '\n'
	 * at the end
	 */
	printf("\n");

	va_end(numbers);
}
