#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file to be created
 * @text_content: content to be writen to @filename
 * Return: On success 1, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t i = 0;
	ssize_t num_bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (; text_content[i] != '\0'; i++) /* to get length of string */
			;
		/* write to file */
		num_bytes = write(fd, text_content, i);
		if (num_bytes == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
