#include "main.h"

/**
 * print_close_error - prints error message when fildes fails to close
 *
 * @status: return value of close function
*/
void print_close_error(ssize_t status)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", status);
	exit(100);
}

/**
 * print_write_error - prints error message when destination file fails to open
 * or be written to
 *
 * @av: (char **) pointer to command line argument
*/
void print_write_error(char **av)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
}

/**
 * print_read_error - prints error message when source file fails to open
 * or be read from
 *
 * @av: (char **) pointer to command line argument
*/
void print_read_error(char **av)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
}

/**
 * copy - copies the content of a file to another file
 *
 * @av: (char **) pointer to command line argument
*/
void copy(char **av)
{
	int fd_s, fd_d;
	ssize_t r_status, w_status, cs_status, cd_status;
	char *buf;

	/* open source file */
	fd_s = open(av[1], O_RDONLY);
	if (fd_s == -1)
		print_read_error(av);

	buf = malloc(1024);
	if (!buf)
		print_read_error(av);

	r_status = read(fd_s, buf, 1024);
	if (r_status == -1)
		print_read_error(av);

	/* open desination file */
	fd_d = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_d == -1)
		print_write_error(av);

	/* writing to destination file */
	w_status = write(fd_d, buf, 1024);
	if (w_status == -1)
		print_write_error(av);

	/* close status for source file */
	cs_status = close(fd_s);
	if (cs_status == -1)
		print_close_error(cs_status);

	/* close status for destination file */
	cd_status = close(fd_d);
	if (cd_status == -1)
		print_close_error(cd_status);
}

/**
 * main - entry point
 *
 * @ac: (int) number of argument from command line
 * @av: (char **) pointer to command line argument
 * Return: 0 on success, otherwise, any other number
*/
int main(int ac, char **av)
{
	if ((ac < 3) | (ac > 3))
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy(av);
	return (0);
}
