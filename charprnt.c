#include "main.h"
/**
 * charprnt - print a character
 * @c: character to print
 * Return: 1
*/

int charprnt(char c)
{
    return (write(1, &c, 1));
}
