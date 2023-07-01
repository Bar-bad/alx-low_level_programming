#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string parameters
 *
 * Return: *s
 */
char *rot13(char *s)
{
	 int a;
	 int b;
	 char alphabet_normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	 char alphabet_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	 for (a = 0; s[a] != '\0'; a++)
	 {
		 for (b = 0; b < 52; b++)
		 {
			 if (s[a] == alphabet_normal[b])
			 {
				 s[a] = alphabet_rot[b];
				 break;
			 }
		 }
	 }
	 return (s);
}
