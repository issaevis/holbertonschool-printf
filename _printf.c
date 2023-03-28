#include "main.h"
//#include <stdlib.h>

/**
  * _printf - Acts the same way as the printf function
  *
  * @format: The conversion specifier to prints
  *
  * Return: Returns all the characters printed
  */

int _printf(const char *format, ...)
{
	va_list args;

	f_idt form_types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_char},
		{NULL, NULL}
	};

	unsigned int i = 0;
	unsigned int j = 0;
	int k;

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 3)
		{
			if (format[i] == '%')
			{

				if (format[i + 1] == *form_types[j].format)
				{
					k = form_types[j].f(args);
				}
			}
			j++;
		}
		i++;
	}

	va_end(args);
	_putchar('\n');

	return (k);
}
