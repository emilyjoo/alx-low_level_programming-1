#include <stdio.h>

/**
 * main - prints the lowercase alphabets
 * in reverse order.
 *
 * Description: the program makes use of only the
 * putchar function to print
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int i = 122;

	for (; i >= 97; i--)
		putchar(i);
	putchar('\n');

	return(0);
}
