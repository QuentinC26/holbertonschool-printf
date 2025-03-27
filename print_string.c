#include "main.h"

/**
 * print_string - print the string using write
 * @args: arguments of va_list
 * Return: number of printed characters
 */

int print_string(va_list args)
{
	char *string = va_arg(args, int);
	int len = 0;

	if (!string)
	{
		string = "(NULL)";
	}
	while (len != '\0')
	{
		len++;
	}
	write(1, &string[len], 1);
	return (1);
}
