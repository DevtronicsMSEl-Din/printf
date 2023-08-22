#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>



/*_printf.c*/
int _printf(const char *format, ...);

/*putchar.c*/
int _putchar(char c);

/*handle.c*/
int string_arg(va_list args, int char_count);
int char_arg(va_list args, int char_count);
int percent(int char_count);

/*binary.c*/
int binary_arg(va_list args, int char_count);

/*int.c*/
int number_arg(int n);
int int_arg(va_list args, int char_count);

/*number.c*/
int hexa(va_list args, int char_count, int uppercase);
int unsigned_int(va_list args, int char_count);
int hexa_upper(va_list args, int char_count);
int hexa_lower(va_list args, int char_count);
int octa(va_list args, int char_count);

#endif

