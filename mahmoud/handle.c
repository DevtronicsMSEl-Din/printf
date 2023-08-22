#include "printf.h"

/**
 * string_arg - string to standard output
 * @args: variable argument
 * @char_count: The count of characters got printed
 */
int string_arg(va_list args, int char_count)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	while (*s != '\0')
	{
		_putchar(*s);
		char_count++;
		s++;
	}
	return (char_count);
}


/**
 * char_arg - single character to standard output
 * @args: variable argument list
 * @char_count: characters printed
 */
int char_arg(va_list args, int char_count)
{
	char c = va_arg(args, int);

	_putchar(c);
	char_count++;

	return (char_count);
}


/**
 * percent - literal % character to standard output
 * @char_count: characters printed
 */
int percent(int char_count)
{
	_putchar('%');
	char_count++;

	return (char_count);
}
