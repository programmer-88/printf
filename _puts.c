#include <unistd.h>
#include "main.h"

/**
 * _puts - prints a string to the standard output, followed by a newline
 * @str: The string to print
 */
void _puts(const char *str)
{
    while (*str)
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
