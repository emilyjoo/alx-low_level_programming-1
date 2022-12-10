#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * numbers
 *
 * Description: the program uses only putchar function
 * to print the digits.
 *
 * Return: return 0 if successful
 */
int main(void)
{
	int i, j;

	i = j = 48;
	for (; i <= 57; i++)
	{
		j = i + 1;
		while (i < j && j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
	}
	putchar('\n');
	return (0);
}
