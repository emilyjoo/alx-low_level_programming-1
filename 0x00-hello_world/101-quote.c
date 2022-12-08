#include <unistd.h>
#include <string.h>

/**
 * main - prints a string to standard error
 *
 * Return: returns 0 is successful
 */
int main(void)
{
	char line[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, line, strlen(line));
	return (1);
}
