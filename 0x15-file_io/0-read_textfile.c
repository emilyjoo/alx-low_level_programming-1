#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: char pointer to textfile
 * @letters: number ot characters to be read and printed
 * Return: number of characters read and printed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, fd;
	ssize_t num_byte;
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
	for (i = 0; i < num_byte; i++)
		_putchar(buf[i]);

	close(fd);
	return (i);
}
