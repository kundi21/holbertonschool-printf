#ifndef _PRINTF_H
#define _PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
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

int _putchar(char c);
int _putstrs(char *str);
int _putint(int n);
int (*get_op_func(char s))(va_list);
int _printf(const char *format, ...);
void negativenumber(int num, char *str);
void negativenumber1(int num, char *str);

int printChar(va_list);
int printString(va_list);
int printPercentage(va_list);
int printNum(va_list);
int printUnsigned(va_list);
int printOctal(va_list);
int printBinary(va_list);
int printHex(va_list);
int printHexUpper(va_list);
int printSpace(va_list args);

int _atoi(char *str);
void _itoa(int num, char *str);
void _itoa1(int num, char *str);
void reverse(char str[], int length);
void reverse1(char str[], int length);

#endif
