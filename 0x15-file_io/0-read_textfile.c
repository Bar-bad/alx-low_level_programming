#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text and prints the text
 * to the POSIX standard output
 * @filename: the file of text that is to be saved
 * @letters: the number of letters that are to be read
 *
 * Return: the actual number of bytes that are read and printed
 * when the function fails or filename is NULL, 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *dataread_buffer;
	ssize_t file_descr;
	size_t writebytes_num;
	size_t readbytes_num;

	file_descr = open(filename, O_RDONLY);
	if (file_descr == -1)
		return (0);

	dataread_buffer = malloc(sizeof(char) * letters);
	readbytes_num = read(file_descr, dataread_buffer, letters);
	writebytes_num = write(STDOUT_FILENO, dataread_buffer, readbytes_num);

	free(dataread_buffer);
	close(file_descr);
	return (writebytes_num);
}
