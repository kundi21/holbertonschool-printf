#ifndef _1_PRINTF_H
#define _1_PRINTF_H

#include <stdlib.h>
#include <stdio.h>

/**
 *
 */
int (*get_function_printf_func(char *s));

int _printf(const char *format, ...);

#endif
