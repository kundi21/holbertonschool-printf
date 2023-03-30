#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char op;
    int (*f)(va_list);
} op_t;


int _putchar(char);
int (*get_op_func(char s))(va_list);
int _printf(const char *format, ...);
int printChar(va_list);
int printString(va_list);
int printPercentage(va_list);
int printNum(va_list);

#endif
