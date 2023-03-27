#include "main.h"
/**
 * printf_string - prints a string
 * @args: list of args
 *
 * Return: the num of characters printed
 */
int printf_string(va_list args)
{
	char *str;
	
	int i, count = 0;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
