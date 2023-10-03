#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file and then prints it out to
 * the POSIX standard output
 * @filename:the textfile that is read
 * @letters: the number of letters that should be read and printed out
 *
 * Return: If success, the actual number of letters it could read and print
 * If the file name is NULL, can not be opened or read, 0,
 * If `write` fails, or does not wrtite the expected amount of bytes, 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t resWrit, resRd, fDesc;
	char *ptrBuff;

	fDesc = open(filename, O_RDONLY);
	if (fDesc == -1)
	{
		return (0);
	}

	ptrBuff = malloc(sizeof(char) * letters);

	resRd = read(fDesc, ptrBuff, letters);

	resWrit = write(STDOUT_FILENO, ptrBuff, resRd);

	free(ptrBuff);
	close(fDesc);

	return (resWrit);
}
