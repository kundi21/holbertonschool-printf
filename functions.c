#include "main.h"
/**
 *
 */

int printChar(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

int printString(va_list args)
{
	return (_putstrs(va_arg(args, char*)));
}

int printNum(va_list args)
{
	long int n = va_arg(args, int);

	char str[100];

	_itoa(n, str);

	return (_putstrs(str));
}
int printPercentage(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}

