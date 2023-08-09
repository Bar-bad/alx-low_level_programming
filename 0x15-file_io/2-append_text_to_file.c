#include "main.h"
/**
 * append_text_to_file - function to append text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: the string to be added to the end of the file
 *
 * Return: On failure or filename is NULL, return -1
 * On success, 1
 * If the file does not exist or if you do not have the required permissions to
 * write the file, return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descr, write_result, contenttext_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (contenttext_len = 0; text_content[contenttext_len];)
			contenttext_len++;
	}

	file_descr = open(filename, O_WRONLY | O_APPEND);

	write_result = write(file_descr, text_content, contenttext_len);

	if (file_descr == -1 || write_result == -1)
		return (-1);

	close(file_descr);

	return (1);
}
