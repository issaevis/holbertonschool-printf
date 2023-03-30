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

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i - 1);
}
/**
*int print_int(va_list list)
*{
*	int num = va_arg(list, int);
*	int div = 1, len = 0;
*
*	if (num < 0)
*	{
*		_putchar('-');
*		len++;
*		num = -num;
*	}
*
*	while (num / div > 9)
*		div *= 10;
*
*	while (div != 0)
*	{
*		_putchar(num / div + '0');
*		len++;
*		num %= div;
*		div /= 10;
*	}
*
*	return (len);
*}
*/
