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
	int fileDescr, contLen = 0, sz;

	if (filename == NULL)
		return (-1);

	fileDescr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDescr == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fileDescr);
		return (-1);
	}
	else
	{
		while (text_content[contLen])
			contLen++;

		sz = write(fileDescr, text_content, contLen);
		if (sz < 0)
		{
			close(fileDescr);
			return (-1);
		}

	}

	close(fileDescr);
	return (1);
}
