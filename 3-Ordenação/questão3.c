/*03 - Implemente o algoritmo Selection Sort em C. Conte e imprima:
• O número total de comparações feitas.
• O número total de trocas realizadas.
*/
#include <stdio.h>

#define TAMANHO 10


void selectionSort(int vetor[], int tamanho, int *comparacoes, int *trocas) {
    *comparacoes = 0;
    *trocas = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        int menorIndice = i;

        for (int j = i + 1; j < tamanho; j++) {
            (*comparacoes)++; 

            if (vetor[j] < vetor[menorIndice]) {
                menorIndice = j;
            }
        }

        
        if (menorIndice != i) {
            int temp = vetor[i];
            vetor[i] = vetor[menorIndice];
            vetor[menorIndice] = temp;
            (*trocas)++; 
        }

      
        printf("Passagem %d: ", i + 1);
        for (int k = 0; k < tamanho; k++) {
            printf("%d ", vetor[k]);
        }
        printf("\n");
    }
}

int main() {
    int vetor[TAMANHO];
    int comparacoes, trocas;

   
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    selectionSort(vetor, TAMANHO, &comparacoes, &trocas);

    
    printf("\nVetor ordenado:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }

    
    printf("\n\nNumero total de comparacoes: %d\n", comparacoes);
    printf("Numero total de trocas: %d\n", trocas);

    return 0;
}
