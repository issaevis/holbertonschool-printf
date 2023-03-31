#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * p_char - Prints a char
 * @list: The variadic list
 * Return: Number of chars
 */
int p_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);

	return (1);
}

/**
 * p_str - prints a string
 * @list: The variadic list
 * Return: Number of chars
 */
int p_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
/**
 * p_int_rec - print integer in recursion
 * @n: long int
 * @count: integer that will be counted
 * Return: number of digits
 */
int p_int_rec(long int n, int count)
{
	int nr_digits = count;

	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
	}
	if (n / 10)
	{
		nr_digits = p_int_rec(n / 10, count + 1);
	}
	_putchar(n % 10 + '0');
	return (nr_digits);
}
/**
 * p_int - prints a int
 * @list: variadic list
 * Return: pintrec
 */
int p_int(va_list list)
{
	long int n;

	n = va_arg(list, int);
	if (n < 0)
		return (p_int_rec(n, 2));
	return (p_int_rec(n, 1));
}
