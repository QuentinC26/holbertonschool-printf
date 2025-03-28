#include "main.h"

/**
 * print_string - print the string using write
 * @args: arguments of va_list
 * Return: number of printed characters
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	int len = 0;

	if (!str)
	{
		str = "(null)";
	}
	while (str[len])
	{
		len++;
	}
	return (write(1, str, len));
}
