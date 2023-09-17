#include <stdio.h>
/**
 * main - function that prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet_array[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alphabet_array[a]);
	}
	putchar('\n');
	return (0);
}
