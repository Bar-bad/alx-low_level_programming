#include "main.h"
#include <stdlib.h>
/**
 * word_counter - a helper function used to count the number of words
 * in a string
 * @s: the string to be evaluated
 *
 * Return: the number of words in the string to be evaluated
 */
int word_counter(char *s)
{
	int flag_inWord, loopCounter, wordCounter;

	flag_inWord = 0;
	wordCounter = 0;

	for (loopCounter = 0; s[loopCounter] != '\0'; loopCounter++)
	{
		if (s[loopCounter] == ' ')
			flag_inWord = 0;
		else if (flag_inWord == 0)
		{
			flag_inWord = 1;
			wordCounter++;
		}
	}
	return (wordCounter);
}
/**
 * strtow - function that spits a string into words
 * @str: the string to be split
 *
 * Return: If it succeeds, a pointer to an array of strings
 * If an error occurs, NULL
 */
char **strtow(char *str)
{
	char **word_matrix, *temp;
	int counter, matrix_index = 0, lenofstr = 0, numofwords, charCounter = 0;
	int start_wordpos, end_wordpos;

	while (*(str + lenofstr))
		lenofstr++;
	numofwords = word_counter(str);
	if (numofwords == 0)
		return (NULL);

	word_matrix = (char **)malloc(sizeof(char *) * (numofwords + 1));
	if (word_matrix == NULL)
		return (NULL);

	for (counter = 0; counter <= lenofstr; counter++)
	{
		if (str[counter] == ' ' || str[counter] == '\0')
		{
			if (charCounter)
			{
				end_wordpos = counter;
				temp = (char *)malloc(sizeof(char) * (charCounter + 1));
				if (temp == NULL)
					return (NULL);
				while (start_wordpos < end_wordpos)
					*temp++ = str[start_wordpos++];
				*temp = '\0';
				word_matrix[matrix_index] = temp - charCounter;
				matrix_index++;
				charCounter = 0;
			}
		}
		else if (charCounter++ == 0)
			start_wordpos = counter;
	}
	word_matrix[matrix_index] = NULL;
	return (word_matrix);
}
