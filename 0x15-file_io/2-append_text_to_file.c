#include "main.h"

/**
 * append_text_to_file  - Textfile
 *
 * @filename: The name of file passed to function.
 * @text_content: Is a NULL terminated string to write to the file.
 *
 * Description: This function appends text at the end of a file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc, sLen = 0, byteNum;

	if (filename == NULL)
		return (-1); /* If the file does not exist */

	fileDesc = open(filename, O_CREAT | O_APPEND | O_WRONLY);
	if (fileDesc == -1) /* IF it fails to open the file */
		return (-1);

	if (text_content) /* If text_content is exist */
	{ /* Count number of char in the string until reach to '\0' */
		while (text_content[sLen])
			sLen++;

		byteNum = write(fileDesc, text_content, sLen);
		if (byteNum == -1)
		{ /* If you do not have the required permissions to write the file */
			close(fileDesc);
			return (-1);
		}
	}
	/**
	 * If text_content == NULL --> skip the brevious if condition
	 * and do not add anything to the file.
	 */

	close(fileDesc);
	return (1);
}
