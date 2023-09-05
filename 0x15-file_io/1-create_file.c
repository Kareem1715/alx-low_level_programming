#include "main.h"

/**
 * create_file - Textfile
 *
 * @filename: The name of file passed to function.
 * @text_content: Is a NULL terminated string to write to the file.
 *
 * Description: This function reads a text file and prints it to
 * the POSIX standard output.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fileDescr, contLen = 0, bytesNum;

	if (filename == NULL)
		return (-1);

	/*	octal (0),  rw- (6), --- (0), --- (0) */
	fileDescr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDescr == -1) /* IF it fails to open the file */
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[contLen] != '\0') /* Count number of char to write */
			contLen++;

		bytesNum = write(fileDescr, text_content, contLen);
		if (bytesNum < 0) /* Or bytesNUM == -1 */
		{
			close(fileDescr);
			return (-1);
		}

	}
	/**
	 * If text_content == NULL --> skip the brevious if condition
	 * and close the file without write in it (empty file).
	 */

	close(fileDescr); /* At the end close the file */
	return (1);
}
