#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from @src to be appended
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* to get the size of @dest */
	for (i = 0; dest[i] != '\0'; ++i)
		;

	/* overwrite and begin from the terminating */
	/* null byte to append n bytes of @src */
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	/* append terminating null byte to @dest */
	dest[i + j] = '\0';

	return (dest);
}
