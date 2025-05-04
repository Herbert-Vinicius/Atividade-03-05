#include <stdio.h>
#include <math.h>

int binarioParaDecimal(int binario) {
    int decimal = 0, p = 0;
    while (binario > 0) {
        decimal += (binario % 10) * pow(2, p);
        binario /= 10;
        p++;
    }
    return decimal;
}

int main() {
    int binario;
    
    printf("Digite um numero binario: ");
    scanf("%d", &binario);
    
    printf("O numero decimal eh: %d\n", binarioParaDecimal(binario));
    
    return 0;
}
