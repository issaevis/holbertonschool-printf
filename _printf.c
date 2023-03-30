<<<<<<< HEAD
#include "main.h"
#include <stddef.h>
#include <stdarg.h>
/**
 * _printf - The same function as printf
 * @format: the conversion specifier to prints
 * Return: returns all the characters printed
 */
int _printf(const char *format, ...)
{
	int counter;
	va_list arg;
	int i, j;
	print_t p_functions[] = {
		{"c", p_char},
		{"s", p_str},
		{"i", p_int},
		{"d", p_int},
		{NULL, NULL},
	};
	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; p_functions[j].f_type != NULL; j++)
			{
				if (format[i + 1] == p_functions[j].f_type[0])
				{
					counter += p_functions[j].f(arg);
=======
#include <stdarg.h>
#include "main.h"
#include <stddef.h>
/**
  * _printf - Acts the same way as the printf function
  * @format: The conversion specifier to prints
  * Return: Returns all the characters printed
  */
int _printf(const char *format, ...)
{
	int counter = 0, i = 0, j;
	va_list args;
	f_dt form_types[] = {
		{ "c", print_char},
		{ "s", print_string},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (j = 0; form_types[j].form != NULL ; j++)
			{
				if (format[i + 1] == form_types[j].form[0])
				{
					counter += form_types[j].f(args);
>>>>>>> 3f20aaa8ec7d1b37b387481119af358db19d4927
					break;
				}
			}
			if (format[i + 1] == '%')
				counter += _putchar('%');
			else if (format[i + 1] == '\0')
				return (-1);
<<<<<<< HEAD
			else if (p_functions[j].f_type == NULL && format[i + 1] != '\0')
			{
				counter += _putchar(format[i]);
				counter += _putchar(format[i + 1]);
			}
=======
			else if (form_types[j].f == NULL && format[i + 1] != '%')
				counter = _putchar(format[i]) + _putchar(format[i + 1]);
>>>>>>> 3f20aaa8ec7d1b37b387481119af358db19d4927
			i++;
		}
		else
			counter += _putchar(format[i]);
<<<<<<< HEAD
	} va_end(arg);
	return (counter);
}

=======
	i++;
	}
	va_end(args);
	return (counter);
}
>>>>>>> 3f20aaa8ec7d1b37b387481119af358db19d4927
