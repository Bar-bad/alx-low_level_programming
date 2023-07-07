#include "main.h"
int recurs_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * recurs_sqrt_recursion - function that recurses to find the natural
 * square root of a number
 * @n: the number to calculate the square root of
 * @a: iterator
 *
 * Return: the square root
 */
int recurs_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (recurs_sqrt_recuesion(n, a + 1));
}
