#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: a number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum of
 *
 * Return: 0, if n == 0
 * the sum of all parameters, if otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mal; /*
			* declare a variable 'mal' of type 'va_list'. the type
			* 'va_list' is provided by the 'stdarg.h' header.
			* It is used for variable argument lists.
			*/

	unsigned int counter, sum = 0; /*
					  * declare 2 unsignedintegers 'counter'
					 * and sum'. Initialize 'sum' to 0.
					 */

	va_start(mal, n); /*
			     * initialize 'mal' variable with the variable argument
			     * list's starting address. Argument n is used to determine the variable
			     * argument's starting point
			     */

	for (counter = 0; counter < n; counter++)
		sum += va_arg(mal, int);

	va_end(mal); /*
			* clean up and terminate the
			* use of the variable arguent list 'mal'
			*/

	return (sum); /* return the variable arguments' calculated sum */
}
