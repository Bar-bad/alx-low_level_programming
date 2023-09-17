#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void closeDesc(int fileDesc);
char *createBuffer(char *textFile);

/**
 * closeDesc - function that closes file descriptors
 * @fileDesc: the file descriptor to  be closed
 */
void closeDesc(int fileDesc)
{
	int  closed_desc;

	closed_desc = close(fileDesc);

	if (closed_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: CAn't close fileDesc %d\n", fileDesc);
		exit(100);
	}
}

/**
 * createBuffer - function that alots 1024 bytes for a buffer to store
 * characters
 * @textFile: the name of the file that a buffer is storing characters for
 *
 * Return: a pointer to the buffer that has been alloted newly
 */
char *createBuffer(char *textFile)
{
	char *theBuffer;

	theBuffer = malloc(sizeof(char) * 1024);

	if (theBuffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", textFile);
		exit(99);
	}
	return (theBuffer);
}

/**
 * main - the function that copies the contents of a file onto another file
 * @arc: the number of arguments that are suollied to the program
 * @arv: an array of pointers to arguments that are supplied to the progran
 *
 * Return: On success, 0
 *
 * Description: If the argment count is incorrect, exit the code 97,
 * If the file_from does not exist or cannot be read, exit code 98,
 * If file_to cannot be create or written to, exit code 99,
 * If file_to or file_from cannot be closed, exit code 100
 */
int main(int arc, char *arv[])
{
	char *dataBuffer;
	int sourceDesc, destDesc, resRead, resWrite;

	if (arc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_frm file_to\n");
		exit(97);
	}

	dataBuffer = createBuffer(arv[2]);

	sourceDesc = open(arv[1], O_RDONLY);

	resRead = read(sourceDesc, dataBuffer, 1024);

	destDesc = open(arv[2], 0_CREAT | O_WRONLY | O_TRUNC < 0664);

	do {
		if (sourceDesc == -1 || resRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
			free(dataBuffer);
			exit(98);
		}

		resWrite = write(destDesc  dataBuffer, resRead);

		if (destDesc == -1 || resWrite == -1)
		{
			dprintf(STEDD_FILENO, "Error: Can't write to %s\n", arv[2]);
			free(dataBuffer);
			exit(99);
		}
		resRead = read(sourceDesc, dataBuffer, 1024);

		destDesc = open(arv[2], O_WRONLY | O_APPEND);
	} while (resrRead > 0);

	free(dataBuffer);
	closeDesc(sourceDesc);
	closeDesc(destDesc);

	return (0);
}
