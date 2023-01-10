#include "main.h"

/**
 * _strlen - computes the length of a string
 *
 * @s: pointer to string
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* to get the size of @dest */
	for (i = 0; dest[i] != '\0'; ++i)
		;
	/* overwrite and begin from the terminating null byte to append @src */
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	/* append terminating null byte to @dest */
	dest[i + j] = '\0';

	return (dest);
}

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	size_t total_length = 0;
	int i = 0, j = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* to get total length of arguments */
	for (; i < ac; i++)
		total_length += _strlen(av[i]);

	ptr = malloc(sizeof(char) * total_length);
	if (!ptr)
		return (NULL);

	for (; j < ac; j++)
	{
		_strcat(ptr, av[j]);
		_strcat(ptr, "\n");
	}
	return (ptr);
}
