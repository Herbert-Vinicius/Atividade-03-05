#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    char hexadecimal[20];
    int decimal = 0, valor, i;

    printf("Digite um numero hexadecimal: ");
    scanf("%s", hexadecimal);

    int len = strlen(hexadecimal);

    for (i = 0; i < len; i++) {
        char c = toupper(hexadecimal[i]);

        if (c >= '0' && c <= '9')
            valor = c - '0';
        else if (c >= 'A' && c <= 'F')
            valor = c - 'A' + 10;
        else {
            printf("Caractere invalido: %c\n", c);
            return 1;
        }

        decimal = decimal * 16 + valor;
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}

