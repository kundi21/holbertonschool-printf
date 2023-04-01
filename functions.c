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
	 if (str == NULL)
        {
		_putchar("(");
		_putchar("n");
		_putchar("u");
		_putchar("l");
		_putchar("l");
		_putchar(")");
        }
	return (_putstrs(va_arg(args, char*)));
}

int printNum(va_list args)
{
	long int n = va_arg(args, int);
	int count = 0;
	if (n < 0)
	{
		_putchar('-');
		count++;
		n *= -1;
	}

//	count += _itoa(n, 10, "0123456789");//falta hacer un itoa.c pero tendria que funcionar cuando lo haga

	return (count);
}
int printPercentage(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}

