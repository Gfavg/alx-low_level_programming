#include "main.h"
/**
 * The _memcpy - function copies n bytes from memory area src
 * to memory area dest
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes copied
 *
 * Return: new values n bytes as copied to dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
