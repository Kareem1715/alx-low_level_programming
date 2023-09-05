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
	int fileDesc, writeBytes, readBytes;
	char buff[1024 * 8];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	readBytes = read(*av[1], buff, 1024);
	if (readBytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[0]);
		exit(98);
	}
	fileDesc = open(av[2], O_RDWR | O_CREAT | O_TRUNC | 664);
	if (fileDesc == -1)
		return (-1);

	writeBytes = write(fileDesc, buff, readBytes);
	if (writeBytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}


	if (close(fileDesc) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDesc);
	}
	return (1);
}
