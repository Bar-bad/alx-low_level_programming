#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: pointer to the changed string
 */
char *cap_string(char *str)
{
	int string_index = 0;

	while (str[string_index])
	{
		while (!(str[string_index]>= 'a' && str[string_index] <= 'z'))
			string_index++;
		
		if (str[string_index - 1] == ' ' ||
			str[string_index - 1] == '\t' ||
			str[string_index - 1] == '\n' ||
			str[string_index - 1] == ',' ||
			str[string_index - 1] == ';' ||
			str[string_index - 1] == '.' ||
			str[string_index - 1] == '!' ||
			str[string_index - 1] == '?' ||
			str[string_index - 1] == '"' ||
			str[string_index - 1] == '(' ||
			str[string_index - 1] == ')' ||
			str[string_index - 1] == '{' ||
			str[string_index - 1] == '}' ||
			string_index == 0)
		str[string_index] -= 32;
	string_index++;
}
return (str);
}
