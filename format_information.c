#include "main.h"

/**
*get_function - the function pointer for associate the function
*@argument: specificator of format
*Return: Pointer to the corresponding function, or NULL if unknown
*/

int (*get_function(char argument))(va_list)
{
	spec_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_number},
		{'i', print_number},
		{0, NULL}
	};

	int count = 0;

	while (specifiers[count].spec)
	{
		if (specifiers[count].spec == argument)
		{
			return (specifiers[count].function);
		}
		count++;
	}
	return (NULL);
}
