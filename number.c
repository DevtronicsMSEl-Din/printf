#include "printf.h"

/**
 * hexa - unsigned integer hexadecimal to standard output
 * @args: variable argument
 * @uppercase: flag to uppercase letters
 */
int hexa(va_list args, int char_count, int uppercase)
{
	unsigned int num = va_arg(args, unsigned int);
	char buf[40];
	int index = 0;

	if (num == 0)
	{
		_putchar('0');
		return (char_count + 1);
	}
	while (num != 0)
	{
		int digit_num = num % 16;

		if (digit_num < 10)
			buf[index] = digit_num + '0';
		else if (uppercase)
			buf[index] = digit_num - 10 + 'A';
		else
			buf[index] = digit_num - 10 + 'a';

		num /= 16;
		index++;
	}

	while (index--)
	{
		_putchar(buf[index]);
		char_count++;
	}

	return (char_count);
}

/**
 * unsigned_int - unsigned int to standard output
 * @args: variable argument
 */
int unsigned_int(va_list args, int char_count)
{
	unsigned int num = va_arg(args, unsigned int);
	char buf[40];
	int index = 0;

	if (num == 0)
	{
		_putchar('0');
		return (char_count + 1);
	}
	while (num != 0)
	{
		buf[index] = "0123456789"[num % 10];
		num /= 10;
		index++;
	}
	while (index--)
	{
		_putchar(buf[index]);
		char_count++;
	}

	return (char_count);
}

/**
 * hexa_upper - unsigned int uppercase hexadecimal to standard output
 * @args: variable argument
 */
int hexa_upper(va_list args, int char_count)
{
	return (hexa(args, char_count, 1));
}

/**
 * hexa_lower - unsigned int lowercase hexadecimal to standard output
 * @args: variable argument 
 */
int hexa_lower(va_list args, int char_count)
{
	return (hexa(args, char_count, 0));
}

/**
 * octa - unsigned int in octal format to standard output
 * @args: variable argument 
 */
int octa(va_list args, int char_count)
{
	unsigned int num = va_arg(args, unsigned int);
	char buf[40];
	int index = 0;

	if (num == 0)
	{
		_putchar('0');
		return (char_count + 1);
	}
	while (num != 0)
	{
		buf[index] = "01234567"[num % 8];
		num /= 8;
		index++;
	}
	while (index--)
	{
		_putchar(buf[index]);
		char_count++;
	}
	return (char_count);
}
