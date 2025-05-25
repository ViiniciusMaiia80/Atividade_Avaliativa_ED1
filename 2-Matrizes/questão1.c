/*01 - Dada uma matriz quadrada de dimensão 9, com valores de 1 a 9 em suas 
posições, escreva um programa que verifique se esta matriz é uma solução válida 
para o Sudoku (isto é, uma solução é válida no Sudoku se cada linha, cada coluna 
e cada bloco contém os números de 1 a 9 somente uma vez).*/
#include <stdio.h>

#define TAMANHO 9

// Função para verificar se uma linha contém números de 1 a 9 sem repetição
int verificarLinha(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        int ocorrencias[TAMANHO + 1] = {0};
        for (int j = 0; j < TAMANHO; j++) {
            if (ocorrencias[matriz[i][j]] != 0) {
                return 0; // Número repetido encontrado
            }
            ocorrencias[matriz[i][j]] = 1;
        }
    }
    return 1;
}

// Função para verificar se uma coluna contém números de 1 a 9 sem repetição
int verificarColuna(int matriz[TAMANHO][TAMANHO]) {
    for (int j = 0; j < TAMANHO; j++) {
        int ocorrencias[TAMANHO + 1] = {0};
        for (int i = 0; i < TAMANHO; i++) {
            if (ocorrencias[matriz[i][j]] != 0) {
                return 0; // Número repetido encontrado
            }
            ocorrencias[matriz[i][j]] = 1;
        }
    }
    return 1;
}

// Função para verificar se cada bloco 3x3 contém números de 1 a 9 sem repetição
int verificarBloco(int matriz[TAMANHO][TAMANHO]) {
    for (int blocoLinha = 0; blocoLinha < TAMANHO; blocoLinha += 3) {
        for (int blocoColuna = 0; blocoColuna < TAMANHO; blocoColuna += 3) {
            int ocorrencias[TAMANHO + 1] = {0};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int num = matriz[blocoLinha + i][blocoColuna + j];
                    if (ocorrencias[num] != 0) {
                        return 0; // Número repetido encontrado
                    }
                    ocorrencias[num] = 1;
                }
            }
        }
    }
    return 1;
}

// Função principal para validar o Sudoku
int validarSudoku(int matriz[TAMANHO][TAMANHO]) {
    return verificarLinha(matriz) && verificarColuna(matriz) && verificarBloco(matriz);
}

int main() {
    int matriz[TAMANHO][TAMANHO] = {
        {5,3,4, 6,7,8, 9,1,2},
        {6,7,2, 1,9,5, 3,4,8},
        {1,9,8, 3,4,2, 5,6,7},

        {8,5,9, 7,6,1, 4,2,3},
        {4,2,6, 8,5,3, 7,9,1},
        {7,1,3, 9,2,4, 8,5,6},
        
        {9,6,1, 5,3,7, 2,8,4},
        {2,8,7, 4,1,9, 6,3,5},
        {3,4,5, 2,8,6, 1,7,9}
    };

    if (validarSudoku(matriz)) {
        printf("A matriz eh uma solução valida para o Sudoku!\n");
    } else {
        printf("A matriz nao e uma solucao valida para o Sudoku.\n");
    }

    return 0;
}
