#include "printf.h"

/**
 * number_arg - number to standard output
 * @n: the number
 */
int number_arg(int n)
{
	unsigned int num;
	int char_count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		char_count++;
	}

	else
		num = n;

	if (num / 10)
		char_count += number_arg(num / 10);

	_putchar((num % 10) + '0');
	char_count++;

	return (char_count);
}

/**
 * int_arg - integer to standard output
 * @args: variable argument
 * @char_count: characters printed
 */
int int_arg(va_list args, int char_count)
{
	int num = va_arg(args, int);

	char_count += number_arg(num);
    
	return (char_count);
}
