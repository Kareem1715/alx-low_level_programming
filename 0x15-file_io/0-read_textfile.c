#include "main.h"

/**
 * read_textfile - Textfile
 *
 * @filename: The name of file passed to function.
 * @letters: The number of letters it should read and print.
 *
 * Description: This function reads a text file and prints it to
 * the POSIX standard output.
 *
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileDescr, buffLen;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (filename == NULL || buff == NULL)
		return (0);

	fileDescr = open(filename, O_RDONLY); /* Open file in read only mode */
	if (fileDescr < 0) /* IF open return -1 (error) */
		return (0);

	buffLen = read(fileDescr, buff, letters); /* Read the data in buffer */
	buffLen = write(STDOUT_FILENO, buff, buffLen); /* print in standard ouput */
	if (buffLen < 0) /* If it fails to read or write */
		return (0);

	close(fileDescr); /* Close the file */
	return (buffLen);
}
