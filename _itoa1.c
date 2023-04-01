#include "main.h"
/**
 * reverse: this function reverse an a string.
 * @str: This is a string.
 * @len: This is a integer.
 */
void reverse(char *str, int len) {
    int i = 0, j = len - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
/**
 * _itoa - This function 
 * @numb: This is a num
 */
void _itoa(int num, char *str) {
	int i = 0;
	if (num < 0)
	{
		negativenumber(num, str);
		return;
	}
	do {
		str[i++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);
	str[i] = '\0';
	reverse(str, i);
}
/**
 * negativenumber: Use this code negative numbers.
 * @num: Is an in int.
 * @str: Is a str.
 */
void negativenumber(int num, char *str)
{
	int a;

	a = 0;
 	do {
		str[a++] = ((num % 10) * -1) + '0';
		num /= 10;
	} while (num < 0);
	str[a++] = '-';
	str[a] = '\0';
	reverse(str, a);
}
