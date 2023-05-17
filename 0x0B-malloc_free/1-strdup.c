#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns  pointer to new space in mem, a co,,py of the string given
 * @str: str to be copied
 * Return: 0 on success
 *
 */
char *_strdup(char *str)
{
	unsigned int len;
	unsigned int i;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

