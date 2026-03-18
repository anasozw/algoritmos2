#include <stdio.h>

#define N (3)

void calculaTransposta(int matriz[N][N], int transposta[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            transposta[j][i] = matriz[i][j];
        }
    }
}

int main(){
    int matriz[N][N], transposta[N][N];

    printf("Digite a matriz 3x3:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    calculaTransposta(matriz, transposta);

    printf("\nTransposta:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}