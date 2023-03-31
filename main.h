#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct Print - struct name
 * @f_type: Type of format
 * @f: Function
 */

typedef struct print
{
	char *f_type;
	int (*f)(va_list list);
} print_t;

int p_char(va_list list);
int p_str(va_list list);
int p_int(va_list list);
int p_int_rec(long int n, int count);
int p_float(va_list list);

int _putchar(char c);
int _printf(const char *format, ...);

#endif
