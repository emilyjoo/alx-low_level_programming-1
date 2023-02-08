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
	size_t size;
	ssize_t num_bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR);
	if (fd < 0)
		return (-1);

	if (!text_content) /* to create empty file */
		size = 0;
	else
	{
		for (size = 0; text_content[size] != '\0'; size++)
			;
	}

	num_bytes = write(fd, text_content, size);
	if (num_bytes < 0)
		return (-1);

	return (1);
}
