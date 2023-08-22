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
	int c = 0;

	va_start(arg, format);

	while (*format)
	{
	if (*format == '%')
	{
		format++;
		switch (*format)
	{
		case 'c':
			charprnt(va_arg(arg, int));
			c++;
			break;
		case 's':
			c += strput(va_arg(arg, char *));
			break;
		case '%':
			charprnt('%');
			c++;
			break;
	}
	}
	else
	{
		charprnt(*format);
		c++;
	}
	format++;
	}

	va_end(arg);
	return (c);
}
