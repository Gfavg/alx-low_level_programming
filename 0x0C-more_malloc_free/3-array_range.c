#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value of array elements
 * @max: maximum value of array elements
 *
 * Return: 0 for success
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int size;

	if (min > max)
		return (NULL);

	size = (max - min + 1);

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
