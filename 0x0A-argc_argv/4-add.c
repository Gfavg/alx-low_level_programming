#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc : no. of args
 * @argv : array of args
 *
 * Return : Always zero 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
