#include "main.h"

/**
 * word_count - computes the number of words in a string.
 * It adds an extra number for a NULL value
 *
 * @str: string to be used
 * Return: number of words counted
*/
int word_count(char *str)
{
	int i, num = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				num++;
		}
		else if (i == 0)
			num++;
	}
	num++;  /* included to make the last element NULL */
	return (num);
}

/**
 * strtow - splits a string into words.
 * Words are separeted by space(s)
 * and the last element of array is made NULL
 * @str: string to be splitted
 * Return: pointer to an array of strings
*/
char **strtow(char *str)
{
	int i = 0, j, k, index, offset = 0, num_words = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = word_count(str);
	if (num_words == 1) /* for a string value of " " */
		return (NULL);
	ptr = malloc(sizeof(char *) * num_words);
	if (!ptr)
		return (NULL);
	ptr[num_words - 1] = NULL;
	while (str[i] != '\0')
	{
		/* if a word is encountered */
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			/* j is the length of the word, including null terminator */
			for (k = i, j = 1; str[k] != ' ' && str[k] != '\0'; k++, j++)
				;
			ptr[offset] = malloc(sizeof(int) * j);
			if (!ptr[offset])
			{
				for (k = 0; k < num_words; k++)
					free(ptr[k]);
				free(ptr[num_words - 1]);
				free(ptr);
				return (NULL);
			}
			j--;/* decremented to assign values to each element of the array */
			for (index = 0; index < j; index++)
				ptr[offset][index] = str[i + index];
			ptr[offset][index] = '\0';
			offset++;
			i += j;
		}
		else
			i++;
	}
	return (ptr);
}
