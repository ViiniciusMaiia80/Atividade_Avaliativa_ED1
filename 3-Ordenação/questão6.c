/*06 - Implemente o Merge Sort para ordenar um vetor de 100 mil elementos 
inteiros gerados aleatoriamente. Meça o tempo de execução usando clock() da 
biblioteca time.h.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100000


void merge(int vetor[], int esquerda, int meio, int direita) {
    int i, j, k;
    int tamanho1 = meio - esquerda + 1;
    int tamanho2 = direita - meio;

    int vetorEsquerda[tamanho1], vetorDireita[tamanho2];

    for (i = 0; i < tamanho1; i++)
        vetorEsquerda[i] = vetor[esquerda + i];
    for (j = 0; j < tamanho2; j++)
        vetorDireita[j] = vetor[meio + 1 + j];

    i = 0, j = 0, k = esquerda;
    while (i < tamanho1 && j < tamanho2) {
        if (vetorEsquerda[i] <= vetorDireita[j]) {
            vetor[k] = vetorEsquerda[i];
            i++;
        } else {
            vetor[k] = vetorDireita[j];
            j++;
        }
        k++;
    }

    while (i < tamanho1) {
        vetor[k] = vetorEsquerda[i];
        i++;
        k++;
    }

    while (j < tamanho2) {
        vetor[k] = vetorDireita[j];
        j++;
        k++;
    }
}


void mergeSort(int vetor[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        mergeSort(vetor, esquerda, meio);
        mergeSort(vetor, meio + 1, direita);
        merge(vetor, esquerda, meio, direita);
    }
}


void preencherVetorAleatorio(int vetor[], int tamanho) {
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 1000000; 
    }
}

int main() {
    int vetor[TAMANHO];


    preencherVetorAleatorio(vetor, TAMANHO);

    clock_t inicio = clock();
    mergeSort(vetor, 0, TAMANHO - 1);
    clock_t fim = clock();

    
    double tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execucao do Merge Sort: %.5f segundos\n", tempo_execucao);

    return 0;
}
