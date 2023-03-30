#include <stdarg.h>
#include "main.h"

#define MAX 100

/**
  * print_char - Prints a char
  *
  * @list: The variadic list
  *
  * Return: Number of chars
  */

int print_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);

	return (1);
}

/**
  * print_string - Prints a string
  *
  * @list: The variadic list
  *
  * Return: Number of chars
  */

int print_string(va_list list)
{
	int i;
	char *str = va_arg(list, char*);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
