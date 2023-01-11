#include "main.h"

char **strtow(char *str)
{
	int i, j, k, offset = 0, char_length = 0, num_words = 0;
	char **ptr, *temp = NULL;

	if (str == NULL)
		return (NULL);

	/* get length of non-space characters */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			char_length++;
		if (str[i] != ' ' && str[i + 1] == ' ')
			num_words++;
	}

	/* '* num_words' to include null terminator */
	ptr = malloc(sizeof(char) * char_length * num_words);
	if (!ptr)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (k = i, j = 0; str[k] != ' '; k++, j++)
				temp[j] = str[k];
			temp[j] = '\0';
			*(ptr + offset) = temp;
			offset++;
		}
	}
	return (ptr);
}
