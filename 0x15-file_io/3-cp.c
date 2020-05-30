#include "holberton.h"

#define USAGE ("Usage: cp file_from file_to")
#define SOURCE (argv[1])
#define DEST (argv[2])
#define NO_READ ("Error: Can't read from file %s\n")
#define NO_WRITE ("Error: Can't write to %s\n")
#define NO_CLOSE ("Error: Can't close fd %d\n")

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: arg count
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int source, dest, read_bytes, write_bytes;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	source = open(SOURCE, O_RDONLY);
	if (source == -1)
		dprintf(STDERR_FILENO, NO_READ, SOURCE), exit(98);
	dest = open(DEST, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((read_bytes = read(source, buf, 1024)) > 0)
		write_bytes = write(dest, buf, read_bytes);

	if (read_bytes == -1)
		dprintf(STDERR_FILENO, NO_READ, SOURCE), exit(98);

	if (write_bytes == -1 || dest == -1)
		dprintf(STDERR_FILENO, NO_WRITE, DEST), exit(99);

	if (close(source) == -1)
		dprintf(STDERR_FILENO, NO_CLOSE, source), exit(100);

	if (close(dest) == -1)
		dprintf(STDERR_FILENO, NO_CLOSE, dest), exit(100);
	return (0);
}
