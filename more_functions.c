#include "main.h"

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstrs - Prints a string
 *
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int _putstrs(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * reverse - reverse.
 * @str: str.
 * @len: len.
 * Return: Void.
 */

void reverse(char *str, int len)
{
	int i = 0, j = len - 1;

	while (i < j)
	{
		char temp = str[i];

		str[i] = str[j];

		str[j] = temp;

		i++;

		j--;
	}
}

/**
 * _itoa - itoa
 * @num: num
 * @str: str
 * Return: void.
 */

void _itoa(int num, char *str)
{
	int i = 0, sign = 0;

	if (num < 0)
	{
		sign = 1;
		num = -num;
	}
	do {

		str[i++] = num % 10 + '0';

		num /= 10;
	}

	while (num > 0);

	if (sign)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	reverse(str, i);
}
