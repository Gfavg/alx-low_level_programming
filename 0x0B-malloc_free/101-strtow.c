#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	int i, j, count, len;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = 0;
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			len++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				count++;
		}
	}
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	count = 0;
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			len++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				words[count] = malloc(sizeof(char) * (len + 1));
				if (words[count] == NULL)
				{
					for (j = 0; j < count; j++)
						free(words[j]);
					free(words);
					return (NULL);
				}
				len = 0;
				count++;
			}
		}
	}
	count = 0;
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			words[count][len] = str[i];
			len++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				words[count][len] = '\0';
				len = 0;
				count++;
			}
		}
	}
	words[count] = NULL;
	return (words);
}
