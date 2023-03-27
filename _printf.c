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
	int count = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	count = _printf_format_string(args, format);

	va_end(args);

	return (count);
}

/**
 * _printf_format_string - produces output according to a format
 * @args: the list of arguments
 * @format: the format string to use
 *
 * Return: the number of characters printed
 */
int _printf_format_string(va_list args, const char *format)
{
	int i, count = 0;
	ConvSpec convs[] = {
	    {"%c", printf_char},
	    {"%s", printf_string},
	    {"%%", printf_percent},
	    {"%d", printf_integer},
	    {"%i", printf_integer},
	    {NULL, NULL}};

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

	return (count);
}
