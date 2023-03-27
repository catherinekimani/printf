#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct ConvSpec - represents a printf conversion specifier
 * @spec: the conversion specifier character, e.g. 'd', 'f', 's'
 * @func: pointer to the function that implements the conversion
 */

typedef struct ConvSpec
{
	char *spec;
	int (*func)();
} ConvSpec;

/*Prototypes*/
int _printf(const char *format, ...);
int _printf_format_string(va_list args, const char *format);
int printf_char(va_list arg);
int printf_string(va_list arg);
int printf_percent(void);
int printf_integer(va_list arg);
int _putchar(char c);
#endif /*MAIN_H*/
