#include <stdio.h>

int main() {
    int decimal, resto, i = 0;
    char hexadecimal[20];

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Hexadecimal: 0\n");
        return 0;
    }

    while (decimal != 0) {
        resto = decimal % 16;

        if (resto < 10)
            hexadecimal[i] = resto + '0'; 
        else
            hexadecimal[i] = resto - 10 + 'A'; 

        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal eh: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");

    return 0;
}

