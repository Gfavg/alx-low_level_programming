#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc : no. of args
 * @argv : array of args
 *
 * Return : zero 0 on Success
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int pdt = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	pdt = num1 * num2;
	printf("%d\n", pdt);

	return (0);
}
