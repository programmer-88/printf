#include <stdio.h>
#include "main.h"
/**
 * _printf - produces output according to format
 * @format: format of argument
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	unsigned int i, s_c = 0, c = 0;
	va_list arg;

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
			s_c = strput(va_arg(arg, char *));
			i++;
			c += (s_c - 1);
		}
		else if (format[i + 1] == '%')
		{
			charprnt('%');
		}
		c += 1;
	}
	va_end(arg);
	return (c);

}
