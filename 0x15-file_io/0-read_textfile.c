#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: char pointer to textfile
 * @letters: number ot characters to be read and printed
 * Return: number of characters read and printed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_byte, num_read;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (!buf)
		return (0);

	num_byte = read(fd, buf, letters);
	num_read = write(STDOUT_FILENO, buf, num_byte);
	if (num_read == -1)
		return (0);

	free(buf);
	close(fd);
	return (num_read);
}
