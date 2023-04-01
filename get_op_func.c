#include "main.h"
/**
 */
int (* get_op_func(char s))(va_list)
{
	op_t ops[] = 
	{
		{'c', printChar},
		{'s', printString},
		{'%', printPercentage},
		{'d', printNum},
		{'i', printNum},
		{'\0', NULL}
	};
	
	int i;

	for (i = 0; ops[i].op != '\0'; i++)
	{
		if (ops[i].op == s)
			return ops[i].f;
	}
	
	return (NULL);
}	
