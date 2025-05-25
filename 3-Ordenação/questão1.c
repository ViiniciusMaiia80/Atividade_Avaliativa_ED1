/*01 - Implemente o algoritmo de ordenação Bubble Sort em C para ordenar um 
vetor de 10 números inteiros lidos do teclado. Após cada passagem do algoritmo, 
imprima o estado atual do vetor.
*/
#include <stdio.h>

#define TAMANHO 10


void bubbleSort(int vetor[], int tamanho) {
    int trocou;
    
    for (int i = 0; i < tamanho - 1; i++) {
        trocou = 0;
        
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
               
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                trocou = 1;
            }
        }
        
        
        printf("Passagem %d: ", i + 1);
        for (int k = 0; k < tamanho; k++) {
            printf("%d ", vetor[k]);
        }
        printf("\n");

        
        if (!trocou) break;
    }
}

int main() {
    int vetor[TAMANHO];

    
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    bubbleSort(vetor, TAMANHO);

    
    printf("\nVetor ordenado:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
