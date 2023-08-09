#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: a pointer to the name of the file that is to be created
 * @text_content: a pointer to the string that is to be written to the file
 *
 * Return: -1, if the function fails
 * 1, if the function succeeds
 */
int create_file(const char *filename, char *text_content)
{
	int file_descr, writebytes_num, txt_length;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (txt_length = 0; text_content[txt_length];)
			txt_length++;
	}

	file_descr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	writebytes_num = write(file_descr, text_content, txt_length);

	if (file_descr == -1 || writebytes_num == -1)
		return (-1);

	close(file_descr);

	return (1);
}
