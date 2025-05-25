/*06 - Faça um programa em C para determinar a próxima jogada em um Jogo da Velha. Assumir que o tabuleiro é representado por uma matriz de 3 x 3, onde cada posição representa uma das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando respectivamente uma casa contendo uma peça minha (-1), uma casa vazia do tabuleiro (0), e uma casa contendo uma peça do meu oponente (1).*/
#include <stdio.h>

#define TAMANHO 3


void encontrarProximaJogada(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 0) { // Se encontrar uma casa vazia
                printf("Proxima jogada recomendada: linha %d, coluna %d\n", i, j);
                return;
            }
        }
    }
    printf("Nao ha mais jogadas disponiveis!\n");
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {
        {1, -1, 0},
        {0, 1, -1},
        {-1, 0, 1}
    };

    printf("Tabuleiro atual:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    encontrarProximaJogada(tabuleiro);

    return 0;
}
