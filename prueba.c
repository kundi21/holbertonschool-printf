#include "printf.h"

int _printf(const char *format, ...)
{
    va_list arg;
    int i, printed = 0;

    va_start(arg, format);

    if (format == NULL)
    {
        va_end(arg);
        return (-1);
    }

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            int (*function)(va_list);
            function = get_op_func(format[i + 1]);
            if (function != NULL)
            {
                printed += function(arg);
                i++;
            }
            else
            {
                printed += _putchar(format[i]);
            }
        }
        else
        {
            printed += _putchar(format[i]);
        }
    }

    va_end(arg);

    return (printed);
}
