#include "main.h"

/**
 * _strcpy - copies a string
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
		dest[i] = src[i];
	dest[i] = src[i]; /* for null terminator */
	return (dest);
}
