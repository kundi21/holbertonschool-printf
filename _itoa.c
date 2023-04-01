#include "printf.h"

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

void _itoa(int num, char *str) {
    int i = 0, sign = 0;
    if (num < 0) {
        sign = 1;
        num = -num;
    }
    do {
        str[i++] = num % 10 + '0';
        num /= 10;
    } while (num > 0);
    if (sign) {
        str[i++] = '-';
    }
    str[i] = '\0';
    reverse(str, i);
}
