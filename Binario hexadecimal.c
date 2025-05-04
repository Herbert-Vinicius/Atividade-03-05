#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char binarioParaHex(char *bin) {
    int decimal = 0;

    for (int i = 0; i < 4; i++) {
        decimal = decimal * 2 + (bin[i] - '0');
    }

    if (decimal < 10)
        return decimal + '0';
    else
        return decimal - 10 + 'A';
}

int main() {
    char binario[100];
    char binarioFormatado[100];
    char hexadecimal[25];
    int len, i, j = 0, padding;

    printf("Digite o numero binario: ");
    scanf("%s", binario);

    len = strlen(binario);
    padding = (4 - (len % 4)) % 4;

    for (i = 0; i < padding; i++) {
        binarioFormatado[i] = '0';
    }

    strcpy(binarioFormatado + padding, binario);
    len = strlen(binarioFormatado);

    for (i = 0; i < len; i += 4) {
        char grupo[5];
        strncpy(grupo, binarioFormatado + i, 4);
        grupo[4] = '\0';
        hexadecimal[j++] = binarioParaHex(grupo);
    }

    hexadecimal[j] = '\0';

    printf("Hexadecimal: %s\n", hexadecimal);

    return 0;
}

