#include "main.h"

int is_prime(int n, int a);

/**
 * is_prime_number - function that says if an integer is a prime number or not
 * @n: the number to check
 *
 * Return: 1 if n is a prime number
 * 0 if n is not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 * is_prime - function that evaluates recursively if a number is prime
 * @n: the number to check
 * @a: iterator
 *
 * Return: 1 if n is a prime number
 * 0 if n is not a prime number
 */
int is_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (is_prime(n, a - 1));
}
