#include "main.h"

/**
 * print_number - Affiche un entier
 * @args: Liste des arguments variadiques
 *
 * Return: Nombre de caractères imprimés
 */
int print_number(va_list args)
{
    int num = va_arg(args, int);
    int count = 0, temp, digit, div = 1;

    if (num < 0)
    {
        count += _putchar('-');
        num = -num;
    }

    temp = num;
    while (temp / 10)
    {
        div *= 10;
        temp /= 10;
    }

    while (div)
    {
        digit = num / div;
        count += _putchar(digit + '0');
        num %= div;
        div /= 10;
    }

    return (count);
}
