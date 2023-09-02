#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xora;
	unsigned int count;

	xora = n ^ m;
	count = 0;

	while (xora != 0)
	{
		count += xora & 1;
		xora >>= 1;
	}

	return (count);
}
