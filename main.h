#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct format - The Base of the struct _printf
 * @function: The function pointer for activate the code in format_information
 * @type_of_format: The pointer to string for attribute a type of format
 */

typedef struct format
{
	char type_of_format;
	int (*function)(va_list);
}
format;

int _printf(const char *format, ...);
int print_string(va_list args);

#endif /*MAIN_H_*/
