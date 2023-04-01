#include "printf.h"
/**
 * _printf - -
 * @format
 * Return: -
 */
int _printf(const char *format, ...)
{
	char k;
	int i, n = 0;
	va_list arg;
	int (*func)(va_list);

	va_start(arg, format);

	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			k = format[i + 1];
			func = get_op_func(k);
			n += func(arg);
			i++;
		}
		else
		{
			_putchar(format[i]);
			n++;
		}
	}

	va_end(arg);

	return (n);
}
