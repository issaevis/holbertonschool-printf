#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);

int _printf(const char *format, ...);
int swtch_cs(va_list args, const char *ptr);

int print_char(va_list list);
int print_string(va_list list);

#endif
