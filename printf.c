#include "main.h"

/**
 * _printf - main function which imitates printf
 * @format: chain of format
 *
 * Return: Number of printed characters
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int (*func)(va_list);

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			func = get_function(*format);
			if (func)
				count += func(args);
			else
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	va_end(args);
	return (count);
}
