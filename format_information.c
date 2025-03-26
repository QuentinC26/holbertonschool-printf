#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*function - the function pointer for print the format
*@argument: specificator of format
*Return: 0 (Success)
*/

int (*function(char argument))(va_list)
{
	format the_format[] = {
		{'s', print_string},
		{'\0', NULL},
	};

	int count = 0;

	while (the_format[count].type_of_format)
	{
		if (the_format[count].type_of_format == argument)
		{
			return (the_format[count].function);
		}
		count++;
	}
	return (NULL);
}
