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
					break;
				}
			}
			if (format[i + 1] == '%')
				counter += _putchar('%');
			else if (form_types[j].f == NULL && format[i + 1] != '%')
				counter = _putchar(format[i]) + _putchar(format[i + 1]);
			else if (format[i + 1] == '\0')
				return (-1);
			i++;
		}
		else
			counter += _putchar(format[i]);
	i++;
	}
	va_end(args);
	return (counter);
}
