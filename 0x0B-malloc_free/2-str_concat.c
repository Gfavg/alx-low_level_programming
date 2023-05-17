#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string, destination
 * @s2: second string
 *
 * Return: 0 on success
 */
char *str_concat(char *s1, char *s2)
{
	char *concate;
	int len1;
	int len2;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++);
	for (len2 = 0; s2[len2] != '\0'; len2++);

	concate = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concate == NULL)
		return (NULL);

	for (i = 0; i <= len1; i++)
		concate[i] = s1[i];
	for (j = 0; j <= len2; j++)
		concate[i + j] = s2[j];

	concate[i + j] = '\0';

	return (concate);
}
