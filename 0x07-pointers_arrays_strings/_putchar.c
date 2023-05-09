#include "main.h"
#include <unistd.h>
/**
 * _putchar write the xter
 * @c: xter to print
 *
 * returns 1 on sucess
 * -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
