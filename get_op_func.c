#include "main.h"
/**
 * get_op_func - get function
 * @s: s
 * Return: int.
 */
int (*get_op_func(char s))(va_list)
{
	op_t ops[] = {

		{' ', printSpace},
		{'c', printChar},
		{'s', printString},
		{'%', printPercentage},
		{'d', printNum},
		{'i', printNum},
		{'\0', NULL},
	};

	int i;

	for (i = 0; ops[i].op != '\0'; i++)
	{
		if (ops[i].op == s)
			return (ops[i].f);
	}

	return (NULL);
}
