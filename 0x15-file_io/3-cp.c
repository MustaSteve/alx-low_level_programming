#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * main - checks if files can be opened
 * @argc: argument counter
 * @argv: list of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto, rfrom;
	int from_c, to_c;
	char buf[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	fileto = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((rfrom = read(filefrom, buf, 1024)) > 0)
	{
	if (fileto < 0 || (write(fileto, buf, rfrom) != rfrom))
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	}
	if (rfrom < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	from_c = close(filefrom);
	if (from_c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", filefrom);
		exit(100);
	}
	to_c = close(fileto);
	if (to_c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fileto);
		exit(100);
	}
	return (0);
}
