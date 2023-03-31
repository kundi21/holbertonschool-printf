#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
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
int _puts(char *);
int _strlen(char *);
void _print_number(int);
int (*get_op_func(char s))(va_list);
int _printf(const char *format, ...);
int printChar(va_list);
void printstring(char *format);
int printString(va_list);
int printPercentage(va_list);
int printNum(va_list);
int printUnsigned(va_list);
int printOctal(va_list);
int printBinary(va_list);
int printHex(va_list);
int printHexUpper(va_list);

#endif
