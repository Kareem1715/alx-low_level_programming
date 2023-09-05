#include "main.h"

/**
 * main - copy files
 *
 * @ac: argc number of arguments.
 * @av: argv the values of arguments.
 *
 * Description: This program copies the content of a file to another file.
 * all errors on the POSIX standard error (STDERR_FILENO)
 *
 * Return: 0 in success and form 97 to 100 in failer.
 */
int main(int ac, char **av)
{
	int writeBytes, readBytes, file1, file2;
	char buff[1024];

	if (ac != 3) /* ./cp file1 file2 */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file1 = open(av[1], O_RDONLY); /* Read only from file1 */
	if (file1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	/* octal (0), rw- (6), rw- (6), r-- (4) */ /* Write only in file2 */
	file2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	/* Copy data from file1 to file2 */
	do {
		readBytes = read(file1, buff, 1024); /* Read data from file1 */
		if (readBytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

		writeBytes = write(file2, buff, readBytes);
		if (writeBytes == -1) /* Write data from file1 to file2 */
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	} while (readBytes != 0);
	/* read returns 0 when reach at end of the file or no bytes are readed */

	if (close(file1) == -1) /* Close file1 and check for error */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);

	if (close(file2) == -1) /* Close file2 and check for error */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);
	return (0);
}
