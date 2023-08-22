#include <stdio.h>
#include "main.h"
/**
 * _printf - produces output according to format
 * @format: format of argument
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	unsigned int i, c = 0;

	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			charprnt(format[i]);
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			charprnt(va_arg(arg, int));
			i++;
		}

		c++;
	}

	va_end(arg);
	return (c);

}
