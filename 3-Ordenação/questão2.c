/*02 - Crie um vetor de 20 números aleatórios entre 0 e 99 e ordene-o usando 
Insertion Sort. Imprima o vetor antes e depois da ordenação. Dica: Use a função 
rand() da biblioteca stdlib.h.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 20


void preencherVetorAleatorio(int vetor[], int tamanho) {
    srand(time(NULL)); 

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100;
    }
}


void insertionSort(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}


void exibirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[TAMANHO];

   
    preencherVetorAleatorio(vetor, TAMANHO);

    
    printf("Vetor antes da ordenacao:\n");
    exibirVetor(vetor, TAMANHO);

   
    insertionSort(vetor, TAMANHO);

   
    printf("\nVetor apos a ordenacao:\n");
    exibirVetor(vetor, TAMANHO);

    return 0;
}
