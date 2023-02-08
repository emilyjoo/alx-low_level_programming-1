#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file to be appended to
 * @text_content: text to be appended
 * Return: 1 on success, otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fd;
	ssize_t num_bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (; text_content[i] != '\0'; i++) /* to get length of string */
			;
	}

	num_bytes = write(fd, text_content, i);
	if (num_bytes == -1)
		return (-1);

	close(fd);
	return (1);
}
