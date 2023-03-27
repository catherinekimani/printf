#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: the format string to use
 * @...: additional arguments for the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	ConvSpec convs[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{"d", printf_integer},
		{"i", printf_integer},
		};

	va_list args;

	int i = 0, j, len = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		int match_found = 0;

		for (j = 0; j < 5; j++)
		{
			if (convs[j].spec[0] == format[i] && convs[j].spec[1] == format[i + 1])
			{
				len += convs[j].func(args);
				i += 2;
				match_found = 1;
				break;
			}
		}

		if (!match_found)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}

	va_end(args);
	return (len);
}