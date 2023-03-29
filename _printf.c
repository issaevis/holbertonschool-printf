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
					if (format[i + 1] == *form_types[j].form)
					{
						counter += form_types[j].f(args);
						i++;
					}
				}
				if (format[i + 1] == '%')
				{
					_putchar('%');
					counter++;
					i++;
				}
			}
			else
			{
				if (format[i - 1] == '%' && format[i] != '%')
				{
					_putchar('%');
					counter++;
				}
				_putchar(format[i]);
				counter++;
			}
		i++;

	}

	va_end(args);
	return (counter);
}
