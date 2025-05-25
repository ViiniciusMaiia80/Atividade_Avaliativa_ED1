/*05 - Implemente em C uma função que recebe dois vetores ordenados em ordem 
crescente e realiza a intercalação (merge) em um terceiro vetor também 
ordenado.
• O primeiro vetor (v1) possui n1 elementos.
• O segundo vetor (v2) possui n2 elementos.
• A função deve gerar um vetor v3 com n1 + n2 elementos, contendo todos os 
elementos de v1 e v2 em ordem crescente*/
#include <stdio.h>


void mergeVetores(int v1[], int n1, int v2[], int n2, int v3[]) {
    int i = 0, j = 0, k = 0;

  
    while (i < n1 && j < n2) {
        if (v1[i] < v2[j]) {
            v3[k++] = v1[i++];
        } else {
            v3[k++] = v2[j++];
        }
    }

    
    while (i < n1) {
        v3[k++] = v1[i++];
    }

    
    while (j < n2) {
        v3[k++] = v2[j++];
    }
}


void exibirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2;

    
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &n1);
    int v1[n1];

    printf("Digite %d elementos ordenados para o primeiro vetor:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &n2);
    int v2[n2];

    printf("Digite %d elementos ordenados para o segundo vetor:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    int v3[n1 + n2]; 
   
    mergeVetores(v1, n1, v2, n2, v3);

    
    printf("\nVetor intercalado:\n");
    exibirVetor(v3, n1 + n2);

    return 0;
}
