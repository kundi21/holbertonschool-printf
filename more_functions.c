#include "main.h"

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
