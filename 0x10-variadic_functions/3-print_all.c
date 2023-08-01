#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: a list of the types of arguments that are passed to the function
 */
void print_all(const char *const format, ...)
{
	int count = 0;
	char *string, *separator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[count])
		{
			switch (format[count])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					count++;
					continue;
			}
			separator = ", ";
			count++;
		}
	}
	printf("\n");
	va_end(list);
}
