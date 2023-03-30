#include "printf.h" 
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	char *buffer
	char *string
	int i,n;
	va_list arg;

	va_start(arg, format);

	va_end(arg);
	
	if (format == NULL)
	{
		return (-1)
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format == %)
		{ 
			string[i] = format[i]
				if (
					string[i + 1] =	format [i + 1]
		}
	}
	for (n = 0; format[n] != '\0'; n++)
		write (1, format, i)
}
	

