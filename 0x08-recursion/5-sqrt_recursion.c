#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int root_recurse(int n, int x);
int _sqrt_recursion(int n)
{
	int x;

	x = 1;
	return (root_recurse(n, x));
}

int root_recurse(int n, int x)
{
	int y;

	y = n / x;
	if (x == y)
		return (y);
	else if (x > y)
		return (-1);
	else
		return (root_recurse(n, x++));
}
