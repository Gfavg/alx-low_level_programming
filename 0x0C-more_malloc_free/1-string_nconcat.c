#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: no. of s2 to concate
 *
 * Return: 0 on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;
	char *nconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++);
	for (len2 = 0; s2[len2] != '\0'; len2++);

	if (n >= len2)
		n = len2;

	nconcat = malloc(sizeof(char) * (len1 + n + 1));
	if (nconcat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		nconcat[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		nconcat[i] = s2[j];

	nconcat[i] = '\0';

	return (nconcat);
}
