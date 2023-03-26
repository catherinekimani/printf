#include "main.h"

/**
 * print_char - prints a single character to stdout
 * @arg: the argument list (va_list) containing the character to print
 *
 * Return: the num of characters printed
 */
int printf_char(va_list arg)
{
	char c = va_arg(arg, int);

	putchar(c);
	
	return (1);
}