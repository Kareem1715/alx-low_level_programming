#include "main.h"

/**
 * main - check the code
 *
 * @ac: argc number of arguments.
 * @av: argv the values of arguments.
 *
 * Description: This program copies the content of a file to another file.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int writeBytes, readBytes, file1, file2;
	char buff[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]), exit(97);


	file1 = open(av[1], O_RDONLY);
	if (file1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[0]), exit(98);

	file2 = open(av[2], O_RDONLY | O_CREAT | O_TRUNC, 0664);
	if (file2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		readBytes = read(file1, buff, 1024);
		if (readBytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[0]), exit(98);

		writeBytes = write(file2, buff, readBytes);
		if (writeBytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	} while (readBytes > 0);

	if (close(file1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);

	if (close(file2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);
	return (0);
}
