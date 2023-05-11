#include "main.h"
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int check_prime(int n, int x);

int is_prime_number(int n)
{
	int x;

	x = 2;
	return (check_prime(n, x));
}

int check_prime(int n, int x)
{
	int z;

	z = n % x;
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (x > n / 2)
		return (1);
	else if (z == 0)
		return (0);
	else
		return (check_prime(n, x++));
}
