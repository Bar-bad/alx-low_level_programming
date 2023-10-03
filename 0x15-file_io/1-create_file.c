#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the name of the file to be created
 * @text_content: a string terminated by a null byte or NULL
 * to write to the file
 * Description: the file that is created must have the permissions "rw-------"
 * Return: On success, 1,
 * On failure, -1. That is, whem the file can not be created,
 * can not be written, "write" command "fails", etc...
 * If "filename" is NULL, -1
 * If "text_content" is NULL, create an empty file
 * If the file already exists, truncate it
 */
int create_file(const char *filename, char *text_content)
{
	int resWrit, fDesc, lenText = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenText = 0; text_content[lenText];)
			lenText++;
	}

	fDesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	resWrit = write(fDesc, text_content, lenText);

	if (fDesc == -1 || resWrit == -1)
		return (-1);

	close(fDesc);

	return (1);
}
