#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	int n;
	int i;

	i = 0;
	n = strlen(s);
	is_palindrome((s[i], s[n - i - 1]));
	{
		if (s[i] != s[n - i - 1])
		{
			return (0);
		}
		else
		{
			i++
			return (is_palindrome(s[i], s[n - i - 1]));
		}
		if (i > n / 2)
			return (1);
	}
}
