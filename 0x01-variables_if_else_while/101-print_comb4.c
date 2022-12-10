#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * numbers
 *
 * Description: the program uses only putchar function
 * to print the digits.
 *
 * Return: return 0 if successful
 */
int main(void)
{
	int i, j, k;
	i = j = k = 48;

	for (; i <= 57; i++)
	{
		j = i + 1;
		for (; j <= 57; j++)
		{
			k = j + 1;
			while (j < k && k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				putchar(',');
				putchar(' ');
				k++;
			}
		}
	}
	putchar('\n');
	return (0);
}
