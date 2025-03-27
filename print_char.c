#include "main.h"

/**
 * print_char - prints a character
 * @args: list of arguments
 *
 * Return: 1
 */

int print_char(va_list args)
{
	char characters = va_arg(args, int);

	write(1, &characters, 1);
	return (1);
}
