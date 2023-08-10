#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void flie_closer(int file_desc);
char *creatBuff(char *fileName);
/**
 * file_closer - function that closes respective file descriptors
 * @file_desc: file descriptor that is to be closed
 */
void file_closer(int file_desc)
{
	int val_returned;

	val_returned = close(file_desc);

	if (val_returned == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);

		exit(100);
	}
}

/**
 * creatBuff - function that allocates 102 bytes for a buffer
 * @fileName: the name of the file the buffer is storing chars(characters) for
 *
 * Return: a poimter to the buffer that's been newly-allocated
 */
char *creatBuff(char *fileName)
{
	char *newBuff;

	newBuff = malloc(sizeof(char) * 1024);

	if (newBuff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fileName);
		exit(99);
	}

	return (newBuff);
}

/**
 * main - function that copies contents of ome file onto another file
 * @argc: the number of arguments that are supplied to the program
 * @argv: an array of poimter to all the arguments
 *
 * Return: On success, 0
 *
 * Description: exit code 97, if the argument count is incorrect
 *		exit code 98, if file_from does not exist or cannot be read
 *		exit code 99, if file_to cannot be created or written to
 *		exit code 100, if file_to or file_from cannot be closed
 */
int main(int argc, char *argv[])
{
	char *newBuff;
	int source_fd, dest_fd, read_retVal, write_retVal;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Create a buffer to use for reading and writing of data */
	newBuff = creatBuff(argv[2]);

	source_fd = open(argv[1], O_RDONLY); /* Open the source file to read */

	/* From the source file, read up to `1024` bytes into the buffer */
	read_retVal = read(source_fd, newBuff, 1024);

	/* Create/open destination file for writing, with appropriate permissions */
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't open %s for writing\n", argv[2]);
		free(newBuff);
		file_closer(source_fd);
		exit(99);
	}

	/* Loop used to read from source file and then write into destination file */
	while ((read_retVal = read(source_fd, newBuff, 1024)) > 0)
	{
		write_retVal = write(dest_fd, newBuff, read_retVal);

		if (write_retVal == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(newBuff);
			file_closer(source_fd);
			file_closer(dest_fd);
			exit(99);
		}
	}

	/* Close source and destination files */
	file_closer(source_fd);
	file_closer(dest_fd);
	free(newBuff);

	return (0);
}
