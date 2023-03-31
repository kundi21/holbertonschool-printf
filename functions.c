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
	int i;
	
	char *str = va_arg(args, char*);
	if (str[i] == NULL)
	{
		_putchar("(");
		_putchar("n");
		_putchar("u");
		_putchar("l");
		_putchar("l");
		_putchar(")");
	}
	for (i = 0; str[i] = '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (_putstrs(str));
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

	count += _itoa(n, 10, "0123456789");//falta hacer un itoa.c pero tendria que funcionar cuando lo haga

	return (count);
}
int printPercentage(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}

