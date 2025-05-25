/*04 - Implemente o algoritmo Quick Sort para ordenar um vetor de n elementos 
fornecidos pelo usuário. Faça o pivô ser sempre o elemento do meio.*/
#include <stdio.h>


void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int particionar(int vetor[], int inicio, int fim) {
    int meio = (inicio + fim) / 2;
    int pivo = vetor[meio];
    trocar(&vetor[meio], &vetor[fim]); 
    int indiceMenor = inicio;

    for (int i = inicio; i < fim; i++) {
        if (vetor[i] < pivo) {
            trocar(&vetor[i], &vetor[indiceMenor]);
            indiceMenor++;
        }
    }
    trocar(&vetor[indiceMenor], &vetor[fim]); 
    return indiceMenor;
}


void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int indicePivo = particionar(vetor, inicio, fim);
        quickSort(vetor, inicio, indicePivo - 1);
        quickSort(vetor, indicePivo + 1, fim);
    }
}


void exibirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int n;

    
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite %d numeros inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("\nVetor antes da ordenacao:\n");
    exibirVetor(vetor, n);

   
    quickSort(vetor, 0, n - 1);

    
    printf("\nVetor apos a ordenacao:\n");
    exibirVetor(vetor, n);

    return 0;
}
