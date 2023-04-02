#include "main.h"
/**
 * printChar - This function print a char.
 * @args: This is a list
 * Return: A value
 */
int printChar(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
/**
 * printString - This function print a string.
 * @args: List
 * Return: A value.
 */
int printString(va_list args)
{
	return (_putstrs(va_arg(args, char*)));
}
/**
 * printNum - This function print Num.
 * @args: Print a num.
 * Return: A value.
 */
int printNum(va_list args)
{
	long int n = va_arg(args, int);

	char str[100];

	_itoa(n, str);

	return (_putstrs(str));
}
/**
 * printPercentage - This function print a percentaje.
 * @args: This is a list.
 * Return: A value
 */
int printPercentage(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}
