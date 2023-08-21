#include <stdio.h>
#include "main.h"

/**
 * _printf - produces output according to format
 * @format: format of argument
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;
	char *str;

	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		if (*format == '%')
		{
			_putchar('%');
			count++;
		}
		else if (*format == 'c')
		{
			str = va_arg(arg, char *);
			_putchar(*str);
			count++;
		}
		else if (*format == 's')
		{
			str = va_arg(arg, char *);
			_puts(str);
			count += _strlen(str);
		}
		}
	else
	{
		_putchar(*format);
		count++;
	}
	format++;

	va_end(arg);
	return (count);
}
