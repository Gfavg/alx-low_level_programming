#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: no. of array elements
 * @size: byte size of each array element
 *
 * Return: 0 on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *call;
	unsigned int malloc_size;
	unsigned char *byte_call;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	malloc_size = nmemb * size;

	call = malloc(malloc_size);
	if (call == NULL)
		return (NULL);

	byte_call = (unsigned char *)call;

	for (i = 0; i < malloc_size; i++)
	{
		byte_call[i] = 0;
	}

	return (call);
}
