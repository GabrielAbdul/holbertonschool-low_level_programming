#include "holberton.h"

/**
  * create_file - function that creates a file
  *
  * @filename: file to create
  * @text_content: text to fill file with
  *
  * Return: 1 (on success)
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int write_count;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (!fd)
		return (-1);
	for (; text_content[len]; len++)
		continue;
	if (text_content)
		write_count = write(fd, text_content, len);
	if (write_count == -1)
		return (write_count);
	close(fd);
	return (1);
}
