#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int pal(char *s, int i; int n);
int is_palindrome(char *s)
{
	int n;

	n = strlen(s);
	return (pal(s, 0, n));
}
int pal(char *s; int i; int n)
{
	if (i > n / 2)
		return (1);
	if (s[i] != s[n - i - 1])
		return (0);
	else
	{
		return (pal(char *s, int i + 1, n));
	}
}
