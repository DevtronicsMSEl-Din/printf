#include "main.h"

/**
 * _printf - Prints output according to a format string
 * @format: A pointer to the format string 
 * @...: arguments to the format specifiers
 *
 * Return: The number of characters printed 
 */
 
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int count = 0;

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            count++;
        }
        else
        {
            i++;
            
            if (format[i] == 'c')
            {
                char c = (char) va_arg(args, int);
                write(1, &c, 1);
                count++;
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(args, char *);
                while (*str)
                {
                    write(1, str, 1);
                    str++;
                    count++;
                }
            }
            else if (format[i] == '%') 
            {
                write(1, "%", 1);
                count++;
            }

        }
    }
    
    va_end(args);
    return count;
}
