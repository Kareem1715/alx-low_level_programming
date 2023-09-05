#include "main.h"

/**
 * append_text_to_file  - Textfile
 *
 * @filename: The name of file passed to function.
 * @text_content: Is a NULL terminated string to write to the file.
 *
 * Description: This function reads a text file and prints it to
 * the POSIX standard output.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc, sLen = 0, byteNum;

	if (filename == NULL)
		return (-1);

	fileDesc = open(filename, O_CREAT | O_APPEND | O_WRONLY);
	if (fileDesc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[sLen] != '\0')
			sLen++;

		byteNum = write(fileDesc, text_content, sLen);
		if (byteNum == -1)
		{
			close(fileDesc);
			return (-1);
		}
	}

	close(fileDesc);
	return (1);
}
