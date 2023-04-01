int atoi(char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Verificar el signo
    if (str[0] == '-') {
        sign = -1;
        i++;
    } else if (str[0] == '+') {
        i++;
    }

    // Procesar cada carácter numérico
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

