#include <stdio.h>

void binario(int n) {
    if (n < 2)
        printf("%d", n);
    else {
        binario(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    printf("Representacao binaria: ");
    binario(num);
    printf("\n");
    return 0;
}