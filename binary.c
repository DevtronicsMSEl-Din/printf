#include "printf.h"

/**
 * binary_arg - converts unsigned int to binary to standard output
 * @args: variable argument
 * @char_count: characters printed
 */
int binary_arg(va_list args, int char_count)
{
	unsigned int n = va_arg(args, unsigned int);
	int binary[32];
    int m = 0;

	if (n == 0)
	{
		_putchar('0');
		char_count++;
	}

	else
	{
		while (n > 0)

		{
			binary[m] = n % 2;
			n = n / 2;
			m++;
		}
		m--;

		while (m >= 0)
		{
			_putchar(binary[m] + '0');
			char_count++;
			m--;
		}
	}
    
	return (char_count);
}

