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
	return (putstring(va_arg(args, char *)));
}

int printNum(va_list args)
{
// VAMO A VER COMO HAGO//
}
int printPercentage(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}

