#include "main.h"

/**
 * _putstrs - Prints a string
 *
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int _putstrs(char *str)
{
        int i;

        if (str == NULL)
                str = "(null)";

        for (i = 0; str[i] != '\0'; i++)
                _putchar(str[i]);

        return (i);
}
