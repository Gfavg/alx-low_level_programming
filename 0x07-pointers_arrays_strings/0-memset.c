#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * @n: fills the first n bytes
 * @s: of memory pointed to by s
 * @b: with (const byte) b
 *
 * Return: changed array with new value(now b) for the 1st n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
