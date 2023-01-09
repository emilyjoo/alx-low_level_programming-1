#include "main.h"

/**
 * _strdup - duplicates a string
 *
 * @str: pointer to char
 * Return: pointer to copy if str
*/
char *_strdup(char *str)
{
	char *ptr;
	size_t size = 0, i = 0;

	if (!str)
		return (NULL);
	/* get size of str to allocate sufficient memory */
	for (; str[size] != '\0'; size++)
		;

	ptr = malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);

	for (; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = str[i]; /* copy null character */

	return (ptr);
}
