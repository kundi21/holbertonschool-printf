#include "printf.h" 
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	int i,n;
	va_list arg;

	va_start(arg, format);

	
	if (format == NULL)
	{
		return (-1)
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			//function = get_op_func formst{i + 1}
		}
		else{
		}
	}

	va_end(arg);
}
	

