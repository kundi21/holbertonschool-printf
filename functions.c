#include "printf.h"
/**
 *
 */

int printChar(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

int printString(va_list args)
{
	return (0);
}

int printNum(va_list args)
{
	return (0);
}
int printPercentage(__attribute__((unused))va_list args)
{
	return (_putchar('%'));
}

