#include "holberton.h"
#include <stdio.h>

/**
  * read_textfile - function that reads a text file
  * and prints it to the POSIX standard output
  *
  * @filename: the file we're reading from
  * @letters: number of letters it should read and print
  *
  * Return: actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t letters_printed;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		free(buf);
		close(fd);
		return (0);
	}
	letters_printed = read(fd, buf, letters);
	if (letters_printed != EOF)
		write(STDOUT_FILENO, buf, letters_printed);
	close(fd);

	return (letters_printed);
}

