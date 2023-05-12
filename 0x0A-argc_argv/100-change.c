#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cent;
	int coin = 0;

	cent = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; cent > 0; coin++)
	{
		if (cent >= 25)
		{
			cent -= 25;
		}
		else if (cent >= 10)
		{
			cent -= 10;
		}
		else if (cent >= 5)
		{
			cent -= 5;
		}
		else if (cent >= 2)
		{
			cent -= 2;
		}
		else
		{
			cent -= 1;
		}
	}
	printf("%d\n", coin);
	return (0);
}
