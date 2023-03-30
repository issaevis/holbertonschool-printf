#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
#include <stdarg.h>
/**
 * struct print - struct name
 * @f_type: type of format
 * @f: function
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

=======

#include <stdarg.h>

int _putchar(char c);

int _printf(const char *format, ...);

int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);

/**
 * struct format_types - Struct format_types
 * @form: The conversion specifier
 * @f: The function pointer
 */

typedef struct format_types
{
	char *form;
	int (*f)(va_list args);
} f_dt;

#endif
>>>>>>> 3f20aaa8ec7d1b37b387481119af358db19d4927
