#ifndef _1_PRINTF_H
#define _1_PRINTF_H

#include <stdlib.h>
#include <stdio.h>

/**
 *
 */
typedef struct func_printf {
	char *unsigned_character
	char *string
	float *digit
	int *integer

	
	
} _printf_t;

int (*get_function_printf_func(char *s));

int _printf(const char *format, ...);

#endif
