#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);

int _printf(const char *format, ...)

int print_char(va_list list);
int print_string(va_list list);

/**
 * struct identifier - Struct identifier
 * @format: The conversion specifier
 * @f: The function pointer
 */

typedef struct identifier
{
	char *format;
	int (*f)(va_list list);
} f_idt;

#endif
