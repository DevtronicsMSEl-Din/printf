#include "printf.h"

/**
 * _printf - function format output to standard output
 * @format: string
 * @...: variable
 * characters got printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0; 
	// Keeps track of the number of characters printed

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				char_count = char_arg(args, char_count); 
                // Print a character argument
			else if (*format == 's')
				char_count = string_arg(args, char_count); 
                // Print a string argument
			else if (*format == '%')
				char_count = percent(char_count); 
                // Print a percent character
			else if (*format == 'd' || *format == 'i')
				char_count = int_arg(args, char_count); 
                // Print an integer argument
			else if (*format == 'b')
				char_count = binary_arg(args, char_count);
                // Print a binary argument
			else
			{
				_putchar('%');
				_putchar(*format);
				char_count += 2;
			}
		}
		else
			char_count += _putchar(*format);

		format++;
	}
	va_end(args);

	return (char_count);
}
