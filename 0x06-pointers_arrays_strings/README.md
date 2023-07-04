#C - More pointers, arrays and strings
0. `0-strcat.c` - A function that concatenates two strings.

	* Prototype: `char *_strcat(char *dest, char *src)`;
	* This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
	* Returns a pointer to the resulting string dest
_FYI: The standard library provides a similar function: `strcat`. Run `man strcat` to learn more._

1. `1-strncat.c` - A function that concatenates two strings.

	* Prototype: `char *_strncat(char *dest, char *src, int n)`;
	* The `_strncat` function is similar to the `_strcat` function, except that
it will use at most n bytes from src; and
	* src does not need to be null-terminated if it contains n or more bytes
	* Return a pointer to the resulting string dest
_FYI: The standard library provides a similar function: `strncat`. Run `man strncat` to learn more._

2. `2-strncpy.c` - A function that copies a string.

	* Prototype: `char *_strncpy(char *dest, char *src, int n)`;
	* Your function should work exactly like `strncpy`
_FYI: The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more._

3. `3-strcmp.c` - A function that compares two strings.

	* Prototype: `int _strcmp(char *s1, char *s2)`;
	* Your function should work exactly like `strcmp`
_FYI: The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more._

4. `4-rev_array.c` - A function that reverses the content of an array of integers.

	* Prototype: `void reverse_array(int *a, int n)`;
	* Where n is the number of elements of the array

5. `5-string_toupper.c` - A function that changes all lowercase letters of a string to uppercase.

	* Prototype: `char *string_toupper(char *)`;

6. `6-cap_string.c` - A function that capitalizes all words of a string.

	* Prototype: `char *cap_string(char *)`;
	* Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

7. `7-leet.c` - A function that encodes a string into 1337.

	* Letters a and A should be replaced by 4
	* Letters e and E should be replaced by 3
	* Letters o and O should be replaced by 0
	* Letters t and T should be replaced by 7
	* Letters l and L should be replaced by 1
	* Prototype: `char *leet(char *)`;
	* You *can only use one if in your code*
	* You *can only use two loops in your code*
	* You are *not allowed to use switch*
	* You are *not allowed to use any ternary operation*

8. `100-rot13.c` - A function that encodes a string using rot13.

	* Prototype: `char *rot13(char *)`;
	* You *can only use if statement once in your code*
	* You *can only use two loops in your code*
	* You are *not allowed to use `switch`*
	* You are *not allowed to use any ternary operation*

9. `101-print_number.c` - A function that prints an integer.

	* Prototype: `void print_number(int n)`;
	* You *can only use `_putchar` function to print*
	* You are *not allowed to use `long`*
	* You are *not allowed to use arrays or pointers*
	* You are *not allowed to hard-code special values*

10. `102-magic.c` - A program that adds one line to a certain code, so that the program prints `a[2] = 98`, followed by a new line

	* You are not allowed to use the variable a in your new line of code
	* You are *not allowed to modify the variable p*
	* You *can only write one statement*
	* You are *not allowed to use ,*
	* You are *not allowed to code anything else than the line of expected line of code at the expected line*
	* Your code should be written at line 19, before the ;
	* Do not remove anything from the initial code (not even the comments)
and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)*
	* You are *allowed to use the standard library*

11. `103-infinite_add.c` - A function that adds two numbers.

	* Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r)`;
	* Where `n1` and `n2` are the two numbers
	* `r` is the buffer that the function will use to store the result
	* `size_r` is the buffer size
	* The function returns a pointer to the result
	* You can assume that you will always get positive numbers, or `0`
	* You can assume that there will be only digits in the strings `n1` and `n2`
	* `n1` and `n2` will never be empty
	* If the result can not be stored in `r` the function must return `0`

12. `104-print_buffer.c` - A function that prints a buffer.

	* Prototype: `void print_buffer(char *b, int size)`;
	* The function must print the content of `size` bytes of the buffer pointed by `b`
	* The output should print 10 bytes per line
	* Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with `0`
	* Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
	* Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print `.`
	* Each line ends with a new line `\n`
	* If `size` is 0 or less, the output should be a new line only `\n`
	* You are allowed to use the standard library
	* The output should look like the following example, and formatted exactly the same way:
```
This is a string!
---------------------------------
00000000: 5468 6973 2069 7320 6120 This is a 
0000000a: 7374 7269 6e67 2100 416e string!.An
00000014: 6420 7468 6973 2069 7320 d this is 
0000001e: 7468 6520 7265 7374 206f the rest o
00000028: 6620 7468 6520 2362 7566 f the #buf
00000032: 6665 7220 3a29 0102 0304 fer :)....
0000003c: 0506 0723 6369 7366 756e ...#cisfun
00000046: 0a00 0000 0000 0000 0000 ..........
00000050: 0000 0000 0000 0000 0000 ..........
0000005a: 2021 3456 2370 6f69 6e74  !4V#point
00000064: 6572 7361 7265 6675 6e20 ersarefun 
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
00000078: 7366 756e 0a00           sfun..
```

## `*-main.c` files are testers for corresponding `.c` files