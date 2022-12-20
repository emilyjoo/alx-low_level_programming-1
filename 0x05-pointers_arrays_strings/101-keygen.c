#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * random_password - generates random valid passwords
 * for the program 101-crackme
 *
 * @n: length of the password
 */
void random_password(int n)
{
	int i, randomizer = 0;

	srand((unsigned int)(time(NULL)));

	char *password = ""; /* to store password*/
	char *numbers = "0123456789";
	char *lc_letters = "abcdefghijklmnopqrstuvwxyz";
	char *uc_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *symbols = "!@#$^&*?()_-+=[]{};`':\"<>,./\\|";

	randomizer = rand() % 4; /* because there are four arrays of characters */
	for (i = 0; i < n; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[(rand() % 10)];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[(rand() % 8)];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = uc_letters[(rand() % 26)];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = lc_letters[(rand() % 26)];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
	password[n] = '\0';
}

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int size = 84;

	random_password(size);
	return (0);
}
