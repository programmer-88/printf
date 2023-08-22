#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int charprnt(char c);

int _printf(const char *format, ...);

void _puts(const char *str);

int _strlen(const char *s);

#endif
