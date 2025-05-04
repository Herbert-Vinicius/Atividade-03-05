#include <stdio.h>
#include <string.h>

void decimalParaBinario(int decimal) {
    char binario[32] = {0};
    int i = 0;
    if (decimal == 0) {
        printf("0\n");
        return;
    }
    while (decimal > 0) {
        binario[i++] = (decimal % 2) + '0';
        decimal /= 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", binario[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);
    printf("O numero binario é: ");
    decimalParaBinario(decimal);
    return 0;
}

