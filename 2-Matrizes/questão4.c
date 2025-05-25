/*04 – Leia uma matriz 5x10 que se refere às repostas de 10 questões de múltipla 
escolha de 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de 
respostas que podem ser a, b, c ou d. Seu programa deve comparar as respostas de 
cada candidato como gabarito e emitir um vetor denominado resultado, contendo 
a pontuação de cada aluno.*/
#include <stdio.h>

#define ALUNOS 5
#define QUESTOES 10

int main() {
    char respostas[ALUNOS][QUESTOES]; 
    char gabarito[QUESTOES]; 
    int resultado[ALUNOS] = {0};

    
    printf("Digite as respostas dos %d alunos (a, b, c ou d):\n", ALUNOS);
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < QUESTOES; j++) {
            printf("Questao %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);
        }
    }

    
    printf("\nDigite o gabarito das %d questoes (a, b, c ou d):\n", QUESTOES);
    for (int i = 0; i < QUESTOES; i++) {
        printf("Questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    
    for (int i = 0; i < ALUNOS; i++) {
        for (int j = 0; j < QUESTOES; j++) {
            if (respostas[i][j] == gabarito[j]) {
                resultado[i]++; 
            }
        }
    }

    printf("\nPontuacao dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: %d acertos\n", i + 1, resultado[i]);
    }

    return 0;
}
