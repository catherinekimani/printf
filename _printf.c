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
	va_list args;

	int i, count = 0;

	ConvSpec convs[] = {
		{"%c", printf_char},
		{"%s", printf_string},
		{"%%", printf_percent},
		{"%d", printf_integer},
		{"%i", printf_integer}};

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			int j;

			for (j = 0; convs[j].spec != NULL; j++)
			{
				if (format[i + 1] == *(convs[j].spec))
				{
					count += convs[j].func(args);
					i++;
					break;
				}
			}
			if (convs[j].spec == NULL)
				count += _putchar('%');
		}
		else
		{
			count += _putchar(format[i]);
		}
	}

	va_end(args);

	return (count);
}
