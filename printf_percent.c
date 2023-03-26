#include "main.h"
/**
 * printf_percent - prints a percent sign to stdout
 * @arg: the va_list argument (unused)
 *
 * Return: the number of characters printed
 */
int printf_percent(va_list arg)
{
	(void)arg;
	return (_putchar('%'));
}