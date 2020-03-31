#include "holberton.h"
/**
  * append_text_to_file - function that aappends text
  * at the end of a file
  *
  * @filename: file to append to
  * @text_content: text to append
  *
  * Return: 1 (on success)
  */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_count, len = 0;

	id (!filename)
		return (-1);
	if (filename)
	{
		fd = open(filename, O_WRONLY | O_APPEND, 0664);
		if (text_content)
		{
			for (; text_content[len]; len++)
				continue;
			write_count = write(fd, text_content, len);
			if (write_count == -1)
				return (write_count);
			close(fd);
		}
		if (!text_content)
		{
			if (fd)
				return (1);
			return (-1);
		}
	}
	return (1);
}
