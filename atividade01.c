#include <stdio.h>

int main() {
    int valor, selos3, selos5;

    printf("Digite o valor da taxa em centavos (>= 8): ");
    scanf("%d", &valor);

    selos5 = valor / 5;
    while (selos5 >= 0) {
        int resto = valor - (selos5 * 5);
        if (resto % 3 == 0) {
            selos3 = resto / 3;
            printf("%d centavos: %d selo(s) de 3 e %d selo(s) de 5\n", valor, selos3, selos5);
            return 0;
        }
        selos5 = selos5 - 1;
    }

    printf("Não é possível formar o valor com selos de 3 e de 5.\n");

    return 0;
}
