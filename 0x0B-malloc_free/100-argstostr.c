#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all arguments of the program.
 * @ac: argument count.
 * @av: pointer to array of size ac.
 *
 * Return: NULL if ac == 0 or av == null, Pointer to new string.
 * NULL on fail.
 */
char *argstostr(int ac, char **av)
{
	int counter, nestloopCounter, currentpos_str = 0, len_concatstr = 0;
	char *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (counter = 0; counter < ac; counter++)
	{
		for (nestloopCounter = 0; av[counter][nestloopCounter]; nestloopCounter++)
			len_concatstr++;
	}
	len_concatstr += ac;

	concat_str = malloc(sizeof(char) * len_concatstr + 1);
	if (concat_str == NULL)
		return (NULL);
	for (counter = 0; counter < ac; counter++)
	{
		for (nestloopCounter = 0; av[counter][nestloopCounter]; nestloopCounter++)
		{
			concat_str[currentpos_str] = av[counter][nestloopCounter];
			currentpos_str++;
		}
		if (concat_str[currentpos_str] == '\0')
		{
			concat_str[currentpos_str++] = '\n';
		}
	}
	return (concat_str);
}
