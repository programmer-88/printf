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
	unsigned int i, s_c = 0, c = 0;

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			charprnt(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			charprnt(va_arg(arg, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			char *str = va_arg(arg, char *);

			while (*str)
			{
				charprnt(*str);
				str++;
				s_c++;
			}
			i++;
			c += (s_c - 1);
		}
		else if (format[i + 1] == '%')
		{
			charprnt('%');
		}
		c++;
	}
	va_end(arg);
	return (c);
}
