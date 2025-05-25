/*7 - Modifique sua implementação do Bubble Sort para que ele pare de ordenar 
caso uma passagem inteira ocorra sem trocas. Após concluir o código, teste-o com 
um vetor já ordenado e compare o número de passos com a versão original.*/

#include <stdio.h>

#define TAMANHO 10


void bubbleSortOtimizado(int vetor[], int tamanho) {
    int trocou;
    int passos = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        trocou = 0;
        passos++;

        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                trocou = 1;
            }
        }

        
        printf("Passagem %d: ", passos);
        for (int k = 0; k < tamanho; k++) {
            printf("%d ", vetor[k]);
        }
        printf("\n");

       
        if (!trocou) break;
    }

    printf("\nNumero total de passos: %d\n", passos);
}

int main() {
    int vetor[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Vetor antes da ordenacao:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    bubbleSortOtimizado(vetor, TAMANHO);

    printf("\nVetor apos a ordenacao:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
