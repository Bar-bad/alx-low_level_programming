#include "main.h"

/**
 * append_text_to_file - function that appends a text to the end of a file
 * @filename: a opinter to the name of the text file
 * @text_content: the string of text to be added to the end of the text file
 *
 * Return: If function succeds, 1,
 * If function fails or the filename is NULL, -1,
 * If file does not exist, or if the user does not have write permissions for
 * the text file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc, wrResult, strLength = 0;

	if (filename == NULL)/*Test if the filename is invalid; NULL*/
		return (-1);/*Show an error by returning -1*/

	if (text_content != NULL)/*Test if text_content is not NULL*/
	{
		for (strLength = 0; text_content[strLength];)/*Calculate
					*text_content strig length
							 */
			strLength++;
	}

	/*
	 * Append to specified file, "filename"; O_APPEND after openig it
	 * in write-only mode; O_WRONLY
	 */
	fileDesc = open(filename, O_WRONLY | O_APPEND);

	wrResult = write(fileDesc, text_content, strLength);/*Write the text_content
							      *string to the text file\
							      */

	if (fileDesc == -1 || wrResult == -1)/*Test if opening or writing the file
					       *failed
					       */
		return (-1);/*Show an error by returning -1*/

	close(fileDesc);

	return (1);/*Show success by returning 1*/
}
