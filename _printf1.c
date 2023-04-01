#include "printf.h" 
/**
 * _printf - -
 * @format
 * Return: -
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list arg;
	int (*func)(va_list);

	va_start(arg, format);
	
	if (!format)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			func = get_op_func(format[i + 1]);
			if (func)
			{
				count += func(arg);
				i++;
			}
			else
			{
				//que pasa cuando no encuentra una funcion
			}
		}
		else
			count += _putchar(format[i]);
	}

	va_end(arg);

	return (count);
}
