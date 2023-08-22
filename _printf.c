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
			putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			putchar(va_arg(arg, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			char *str = va_arg(arg, char *);

			while (*str)
			{
				putchar(*str);
				str++;
				s_c++;
			}
			i++;
			c += (s_c - 1);
		}
		else if (format[i + 1] == '%')
		{
			putchar('%');
		}
		c++;
	}
	va_end(arg);
	return (c);
}
