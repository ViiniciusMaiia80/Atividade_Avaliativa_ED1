/*02 - Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela 
possui.*/
#include <stdio.h>
#include <stdlib.h>
#define X 4
int contador=0;
void lerMatrizes(float m1[X][X]){
    for(int i=0; i<X;i++){
        for(int j=0; j<X; j++){
            m1[i][j] = rand() % 30;
        }
    }
}
void exibirMatriz(float m1[X][X]){
    for(int i=0; i<X;i++){
        for(int j =0;j<X;j++){
            printf("%.f ", m1[i][j]);
        }
        printf("\n");
    }
}
void maiorQue10(float m1[X][X]){
    for(int i=0; i<X; i++){
        for(int j=0;j<X;j++){
            if(m1[i][j]>10){
                contador++;
            }
        }
    }
    printf("Elementos maiores que 10 na matriz: %i", contador);
}
int main(){
    float m1[X][X];
    lerMatrizes(m1);
    exibirMatriz(m1);
    maiorQue10(m1);
    return 0;
}
 





































/*#include <stdio.h>

#define TAMANHO 4

int main() {
    int matriz[TAMANHO][TAMANHO];
    int contador = 0;


    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    
    printf("\nA matriz possui %d valores maiores que 10.\n", contador);

    return 0;
}
*/