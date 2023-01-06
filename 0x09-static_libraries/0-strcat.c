#include "main.h"

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
