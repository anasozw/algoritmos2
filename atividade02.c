#include <stdio.h>

//converte (hora, minuto) para minutos desde meia noite.
int minutos(int hora, int minuto) {
    return hora * 60 + minuto;
}

//receber dois tempos em minutos e devolver a diferença.
int diferença(int t1, int t2) {
    int d = t1 - t2;
    if (d < 0) d = -d;
    return d;
}

int main(void) {
    int h1, m1; //hora e minuto do primeiro horario
    int h2, m2; // do segundo horario

    //lê no formato hh:mm
    printf("Digite o primeiro horario (HH:MM): ");
    if (scanf("%d:%d", &h1, &m1) != 2) {
        printf("Formato inválido. \n");
        return 1;
    }

    printf("Digite o segundo horario (HH:MM): ");
    if (scanf("%d:%d", &h2, &m2) != 2) {
        printf("Formato inválido. \n");
        return 1;
    }

    // converte cada horario.
    int t1 = minutos(h1, m1);
    int t2 = minutos(h2, m2);
    
    //calcula a diferença
    int diff = diferença(t1, t2);
    
    //exibe o resultado.
    printf("Diferença: %d minutos\n", diff);
    return 0;
}