#include "main.h"
/**
 * printChar - print char
 * @args: va_list
 * Return: int
 */
int printChar(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * printString - print string
 * @args: va_list
 * Return: int.
 */

int printString(va_list args)
{
	return (_putstrs(va_arg(args, char*)));
}
/**
 * printNum - print num
 * @args: va_list
 * Return: int
 */

int printNum(va_list args)
{
	long int n = va_arg(args, int);

	char str[100];

	_itoa(n, str);

	return (_putstrs(str));
}
/**
 * printPercentage - print %
 * @args: va_list
 * Return: int
 */

int printPercentage(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}

