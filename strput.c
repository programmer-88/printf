#include "main.h"

/**
 * strput - print a string
 * @c: string
 * Return: number of bytes
*/

int strput(char *c)
{
	int i = 0;

	if (c)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			charprnt(c[i]);        }

	}
	return (i);
}
