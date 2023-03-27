#include "main.h"

/**
 * printf_integer - prints an integer
 * @args: the list of args
 *
 * Return: the num of characters printed
 */
int printf_integer(va_list args)
{
	int n = va_arg(args, int);
	char buffer[12];
	int i, count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	i = 0;
	do {
		buffer[i++] = n % 10 + '0';
		n /= 10;
	} while (n > 0);

	while (--i >= 0)
		count += _putchar(buffer[i]);

	return (count);
}
