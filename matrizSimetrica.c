#include <stdio.h>
#include <stdbool.h>

#define N 3

bool verificaSimetria(int matriz[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(matriz[i][j] != matriz[j][i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int matriz[N][N];

    printf("Digite a matriz 3x3:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    if(verificaSimetria(matriz)){
        printf("A matriz é simetrica\n");
    } else {
        printf("A matriz nao é simetrica\n");
    }

    return 0;
}