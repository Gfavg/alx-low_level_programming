#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an arr of chars, and init with a specific char
 * @size: array size
 * @c: xter to assign
 * Description: creat array of size size and assign char c
 *
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *xter;
	unsigned int i;

	if (size == 0)
		return (NULL);
	xter = malloc(size * sizeof(char));

	if (xter == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		xter[i] = c;

	return (xter);
}
