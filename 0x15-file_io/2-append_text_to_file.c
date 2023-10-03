#include "main.h"
/**
 * append_text_to_file - function that appends a text at the end of a file
 * @filename: the name of the file that the text is to be appended to
 * @text_content: the string that is terminated by a null byte or NULL, that is
 * to be appended to or added at the end of a file
 * Description: If the file does not exist, do not create it.
 *
 * Return: On success, 1,
 * On failure, -1
 * If the file exists, 1,
 * If the file does not exist or you don't have the permissions that are
 * required in order to write the file, -1..
 * If "filename" is NULL, -1,
 * If "text_content" is NULL, do not add anything to the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int resWrit, fDesc, lenText = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenText = 0; text_content[lenText];)
			lenText++;
	}

	fDesc = open(filename, O_WRONLY | O_APPEND);

	resWrit = write(fDesc, text_content, lenText);

	if (fDesc == -1 || resWrit == -1)
		return (-1);

	close(fDesc);

	return (1);
}
