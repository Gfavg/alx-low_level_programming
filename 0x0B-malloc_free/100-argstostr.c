#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: no. of arguments
 * @av: array of arguments
 *
 * Return: 0 on success
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int k = 0;
	int i;
	int j;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
	}
}
