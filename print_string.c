#include "main.h"

/**
 * print_string - printf the string to stdout
 * @args: arguments of int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_string(va_list args)
{
	char *string = va_arg(args, int);
	int len = 0;

	while (len != '\0')
	{
		len++;
	}
	write(1, &string[len], 1);
	return (1);
}
