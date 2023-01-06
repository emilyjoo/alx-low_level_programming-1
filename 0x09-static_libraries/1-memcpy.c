#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to be cpopied
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
