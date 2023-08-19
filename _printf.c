#include "main.h"

/**
 * _printf - produces output according to format
 * @format: format of argument
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list (arg);
	int x, count = 0;
	char *str;

	va_start(arg, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
		}
		if (*format == '\0')
		{
			break;
		}
		if (*format == 'c')
		{
			x = va_arg(arg, int);
			_putchar(x);
			count++;
		}
		else if (*format == 's')
		{
			str = va_arg(arg, char *);
		
			while (*str)
			{
				_putchar(*str);
				str++;
				count++;
			}
		}
		else if (*format == '%')
		{
			_putchar('%');
			count++;
		}
		format++;
		
	}
	va_end(arg);
	return (count);
}
