#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arguments passed into it
 * @argc : no. of args
 * @argv : array of args
 *
 * Return : zero 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
