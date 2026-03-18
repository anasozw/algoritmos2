#include <stdio.h>

void inverteVetor(int vetor[], int n){
    int temp;

    for(int i = 0; i < n/2; i++){
        temp = vetor[i];
        vetor[i] = vetor[n - 1 - i];
        vetor[n - 1 - i] = temp;
    }
}

int main(){
    int vetor[7];

    printf("Digite 7 elementos:\n");
    for(int i = 0; i < 7; i++){
        scanf("%d", &vetor[i]);
    }

    inverteVetor(vetor, 7);

    printf("Vetor invertido:\n");
    for(int i = 0; i < 7; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}