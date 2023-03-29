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
	int counter;
	va_list arg;
	const char *ptr;

	if (format == NULL)
		return (-1);
	va_start(arg, format);

	for (ptr = format; *ptr ; ptr++)
	{
		if (*ptr == '%' && (*ptr + 1) == '%')
		{
			_putchar('%');
			counter++;
			continue;
		}
		else if (*ptr == '%' && (*ptr + 1) != '%')
		{
			counter += swtch_cs(arg, ptr);
			ptr++;
			continue;
		}
		else
		{
			if (ptr == NULL)
				return (0);

			_putchar(*ptr);
			counter++;
		}
	}
	va_end(arg);
	return (counter);
}

/**
  * swtch_cs - Switch cases with all the probable chances
  * @arg: The list
  * @ptr: The pointer that points to format
  * Return: Returns the number of chars printed
  */
int swtch_cs(va_list arg, const char *ptr)
{
	int counter = 0;

	switch (*++ptr)
	{
	case 'c':
		counter += print_char(arg);
		break;
	case 's':
		counter += print_string(arg);
		break;
	case '%':
		_putchar('%');
		counter++;
		break;
	case '\0':
		return (-1);

	default:
		_putchar('%');
		_putchar(*ptr);
		counter += 2;
	}
	return (counter);
}
