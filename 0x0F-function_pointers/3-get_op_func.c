#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct function to
 * perform the operation is asked by the user
 * @s: operator passed as an argument
 *
 * Return: the pointer to the function corresponding to the operator
 * given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int count = 0;

	while (operators[count].op != NULL && *(operators[count].op) != *s)
		count++;

	return (operators[count].f);
}
