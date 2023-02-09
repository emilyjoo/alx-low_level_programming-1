#include "main.h"

/**
 * print_error_message - prints error message when source/destination file
 * fails to open or be read from/written to
 *
 * @fd_s: filedes for source file
 * @fd_d: filedes for destination file
 * @av: (char **) pointer to command line argument
 */
void print_error_message(int fd_s, int fd_d, char **av)
{
	if (fd_s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_d == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
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
	int num_read = 1024, fd_s, fd_d;
	ssize_t w_status, cs_status, cd_status;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* open source file */
	fd_s = open(av[1], O_RDONLY);
	/* open desination file */
	fd_d = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	print_error_message(fd_s, fd_d, av);

	while (num_read > 0)
	{
		/* at the EOF refered to by fd_s, read() will return 0 */
		num_read = read(fd_s, buf, 1024);
		if (num_read == -1)
			print_error_message(-1, 0, av);

		/* writing to destination file */
		w_status = write(fd_d, buf, num_read);
		if (w_status == -1)
			print_error_message(0, -1, av);
	}

	/* close status for source file */
	cs_status = close(fd_s);
	if (cs_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_s), exit(100);

	/* close status for destination file */
	cd_status = close(fd_d);
	if (cd_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_d), exit(100);
	return (0);
}
