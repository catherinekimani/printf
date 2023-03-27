#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct ConvSpec - represents a conversion specifier in a printf format string
 * @spec: the conversion specifier character, such as 'd', 'f', 's', etc.
 * @func: pointer to the function that implements the conversion for this specifier
 */
typedef struct ConvSpec
{
	char *spec;
	int (*func)();
} ConvSpec;

/*Prototypes*/
int _printf(const char *format, ...);
int printf_char(va_list arg);
int printf_string(va_list arg);
int printf_percent(void);
int printf_integer(va_list arg);
int _strlen(char *s);
int _putchar(char c);
#endif /*MAIN_H*/