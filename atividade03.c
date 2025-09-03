#include <stdio.h>

// Função para calcular a média 
float calcularMediaTurma(float notas[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }
    return soma / n;
}

// Função para imprimir os resultados (aprovados ou recuperação)
void imprimirResultados(float notas[], int n) {
    for (int i = 0; i < n; i++) {
        if (notas[i] >= 7.0) {
            printf("Estudante %d: Aprovado (Nota: %.2f)\n", i + 1, notas[i]);
        } else {
            printf("Estudante %d: Recuperação (Nota: %.2f)\n", i + 1, notas[i]);
        }
    }
}

int main() {
    int n;

    printf("Digite o numero de estudantes: ");
    scanf("%d", &n);

    float notas[n]; // Vetor para armazenar as notas

    // Ler as notas
    for (int i = 0; i < n; i++) {
        printf("Digite a nota do estudante %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Calcula e mostra a média 
    float media = calcularMediaTurma(notas, n);
    printf("\nMedia da turma: %.2f\n\n", media);

    // Mostra quem está aprovado e quem está em recuperação
    imprimirResultados(notas, n);

    return 0;
}