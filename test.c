#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("len = %d, len2 = %d\n", len, len2);
    _printf("hola %j\n");
    len = _printf("Length:[%d, %i]\n", len, len);
    len2 = printf("Length:[%d, %i]\n", len2, len2);
    printf("_printf = %d, printf = %d\n", len, len2);
    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    printf("_printf = %d, printf = %d\n", len, len2);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    printf("_printf = %d, printf = %d\n", len, len2);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    len = _printf("INT_MIN:[%d]\n", INT_MIN);
    len2 = printf("INT_MIN:[%d]\n", INT_MIN);
    printf("_printf = %d, printf = %d\n", len, len2);
    return (0);
}
