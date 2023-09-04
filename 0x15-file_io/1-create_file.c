#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: a pointer to the name of the file that is to be created
 * @text_content: a NULL terminated string that is to be written intp the file
 *
 * Return: If the function succeeds, 1,
 * if function fails, -1(the file cannot be created, cannot be written,
 * write "fails", etc..
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc, wrResult, strLength = 0;

	if (filename == NULL)/*Test if filename is invalid; NULL*/
		return (-1);/*Show an error by returning -1*/

	if (text_content != NULL)/*Test if the text_content is NULL*/
	{
		for (strLength = 0; text_content[strLength];)/*Calculate text_content string
							      *length
							      */
			strLength++;
	}

	/*Open file for creation; O_CREAT, read & write; ORDWR, & truncate; O_TRUNC*/
	/*Set no file permissions for others and read & write for owner; 0600*/
	fileDesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wrResult = write(fileDesc, text_content, strLength);

	if (fileDesc == -1 || wrResult == -1)/*Test if opening or writing the file
					       *failed
					       */
		return (-1);/*Show an error by returning -1*/

	close(fileDesc);

	return (1);/*Show success by returning 1*/
}
