#include "printf.h" 
/**
 * _printf - -
 * @format
 * Return: -
 */
int _printf(const char *format, ...)
{
	char k;
	int i, n;
	va_list arg;

	va_start(arg, format);

	
	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			k = format [i + 1];
			get_op_func(k, arg);
		}
		else
		{
			printstring(format[i]);
		}
	}
	return (0);
	va_end(arg);
}
	

