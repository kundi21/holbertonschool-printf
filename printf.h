#ifndef _1_PRINTF_H
#define _1_PRINTF_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct function_printf
{
} function_printf_t;

int (*get_function_printf_func(char *s));
int _printf(const char *format, ...);

#endif
