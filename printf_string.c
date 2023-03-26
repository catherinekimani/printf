#include "main.h"

/**
 * printf_string - prints a string to stdout
 * @arg: the va_list argument containing the string to print
 *
 * Return: the number of characters printed
 */
int printf_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i, count = 0;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}