#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);

int _printf(const char *format, ...);

int print_char(va_list list);
int print_string(va_list list);

/**
 * struct format_types - Struct format_types
 * @format: The conversion specifier
 * @f: The function pointer
 */

typedef struct format_types
{
	char *form;
	int (*f)(va_list args);
} f_dt;

#endif
