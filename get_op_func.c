#include "printf.h"
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
	return (NULL);
}	
