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

	while (*format != '\0')
	{
	if (*format == '%')
	{
		format++;
		switch (*format)
	{
		case 'c':
			c += printf("%c", va_arg(arg, int));
			break;
		case 's':
			c += printf("%s", va_arg(arg, char*));
			break;
		case '%':
			c += printf("%%");
			break;
		default:
			break;
	}
	}
	else
	{
		printf("%c", *format);
		c++;
	}
	format++;
	}

	va_end(arg);
	return (c);
}
