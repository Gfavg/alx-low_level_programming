#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: no. of bytes to allocate
 *
 *
 * Return: 0 on success
 */
void *malloc_checked(unsigned int b)
{
	void *arr = malloc(b);
	if  (arr == NULL)
	{
		exit(98);
	}

	return (arr);
}
