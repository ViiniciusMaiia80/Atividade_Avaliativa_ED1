/*05 - Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as 
seguintes informações sobre alunos de uma disciplina, sendo todas as 
informações do tipo inteiro:
• Primeira coluna: número de matrícula (use um inteiro)
• Segunda coluna: média das provas
• Terceira coluna: média dos trabalhos
• Quarta coluna: nota final
Elabore um programa que:
(a) Leia as três primeiras informações de cada aluno;
(b) Calcule a nota final como sendo a soma da média das provas e da média dos 
trabalhos;
(c) Imprima a matrícula do aluno que obteve a maior nota final (assuma que só 
existe uma maior nota);
(d) Imprima a média aritmética das notas finais.*/

#include <stdio.h>

#define LINHAS 5
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS]; 
    int maiorNotaMatricula = 0; 
    float somaNotas = 0; 
    int indiceMaiorNota = 0;

    
    printf("Digite as informações dos alunos:\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Numero da matricula: ");
        scanf("%d", &matriz[i][0]); 

        printf("Media das provas: ");
        scanf("%d", &matriz[i][1]);

        printf("Media dos trabalhos: ");
        scanf("%d", &matriz[i][2]); 

      
        matriz[i][3] = matriz[i][1] + matriz[i][2];

        
        somaNotas += matriz[i][3];

        
        if (matriz[i][3] > matriz[indiceMaiorNota][3]) {
            indiceMaiorNota = i;
        }
    }

   
    printf("\nAluno com maior nota final:\n");
    printf("Matricula: %d, Nota final: %d\n", matriz[indiceMaiorNota][0], matriz[indiceMaiorNota][3]);

    printf("\nMedia aritmetica das notas finais: %.2f\n", somaNotas / LINHAS);

    return 0;
}
