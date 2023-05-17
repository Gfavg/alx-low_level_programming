#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints one xter at a time to console/stdout
 * @c: xter to print
 *
 * Return: always 1(Success)
 * and -1 (Error), and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
