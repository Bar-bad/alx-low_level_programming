#include "main.h"

int is_string_palindrome(char *s, int a, int string_length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: the string to be reversed
 *
 * Return: 1 if it is a palindrome
 * 0 if it is not a palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_string_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_string_palindrome - function that checks the characters recursively
 * for palindrome
 * @s: the string to be checked
 * @a: iterator
 * @string_length: the length of the string
 *
 * Return: 1 if it is a palindrome
 * 0 if it is not a palindrome
 */
int is_string_palindrome(char *s, int a, int string_length)
{
	if (*(s + a) != *(s + string_length - 1))
		return (0);
	if (a >= string_length)
		return (1);
	return (is_string_palindrome(s, a + 1, string_length - 1));
}
