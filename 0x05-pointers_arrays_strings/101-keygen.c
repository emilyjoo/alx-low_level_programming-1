#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid password for
 * the program 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2640)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}

	printf("%c", 2772 - sum);

	return (0);
}
