#include "printf.h"

/**
 * _putchar - make char to the standard output
 * @c: the character to write
 * always return 1. Otherwise return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


