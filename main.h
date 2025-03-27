#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct specifier - The Base of specipy the type of format
 * @function: The function pointer for activate the code in format_information
 * @spec: The characters for attribute a type of format
 */

typedef struct specifier
{
	char spec;
	int (*function)(va_list);
}
spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_number(va_list args);
int (*get_function(char argument))(va_list);

#endif /*MAIN_H_*/
