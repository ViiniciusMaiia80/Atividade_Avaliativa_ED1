/*02 - Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela 
possui.*/
#include <stdio.h>

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
