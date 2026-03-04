#include <stdio.h>

int minutos(int hora, int min) {
    return hora * 60 + min;
}

int diferenca(int t1, int t2) {

    if(t1 > t2)
        return t1 - t2;
    else
        return t2 - t1;
}

int main() {

    int h1, m1, h2, m2;

    printf("Digite o primeiro horario (hh:mm): ");
    scanf("%d:%d", &h1, &m1);

    printf("Digite o segundo horario (hh:mm): ");
    scanf("%d:%d", &h2, &m2);

    int t1 = minutos(h1, m1);
    int t2 = minutos(h2, m2);

    int diff = diferenca(t1, t2);

    printf("Diferenca em minutos: %d\n", diff);

    return 0;
}