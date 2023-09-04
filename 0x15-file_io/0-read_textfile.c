#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints i
 * to the POSIX standard output
 * @filename: the text file that is read
 * @letters: the number of letters that to be read in thetext file
 *
 * Return: If the function succeeds, w, which is the actual number of bytes
 * that are read and printed
 * from the text file
 * If the function fails, 0, of the filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *dataBuffer;
	ssize_t fileDesc;
	ssize_t wrBytes;
	ssize_t rdBytes;

	fileDesc = open(filename, O_RDONLY);/*Open specified file; "filename"
					      * for reading
					      */
	if (fileDesc == -1)/*Test if the text file cannot be opened;
			     * error occurs
			     */
		return (0);

	dataBuffer = malloc(sizeof(char) * letters);/*Do memory allocation for a
						      * buffer of size "letters"
						      */
	rdBytes = read(fileDesc, dataBuffer, letters);/*Store upto "letters" bytes
							* read from the text file nto "dataBuffer"
							*/
	wrBytes = write(STDOUT_FILENO, dataBuffer, rdBytes);/*Write upto "rdBytes"
							      *bytes from "dataBuffer" to the stdout
						      */

	free(dataBuffer);
	close(fileDesc);

	return (wrBytes);/*Return the no. of bytes that have been written; is
			   * equal to the number of bytes that are read too
			   */
}
