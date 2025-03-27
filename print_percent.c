
#include "main.h"

/**
 * print_percent - Affiche un caractère '%'
 * @args: Liste d'arguments (non utilisé)
 *
 * Return: Nombre de caractères imprimés (1)
 */
int print_percent(va_list args)
{
    (void)args;
    return (_putchar('%'));
}