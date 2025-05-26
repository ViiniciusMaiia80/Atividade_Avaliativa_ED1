/*04 – Leia uma matriz 5x10 que se refere às repostas de 10 questões de múltipla 
escolha de 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de 
respostas que podem ser a, b, c ou d. Seu programa deve comparar as respostas de 
cada candidato com o gabarito e emitir um vetor denominado resultado, contendo 
a pontuação de cada aluno.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int min='a', max='d', gabarito[10], resultado[5], repostaCerta=0;
    char m[5][10];
    for(int i=0;i<5;i++){
        printf("Resposta aluno %i: ", i);
        for(int j=0;j<10;j++){
            m[i][j]= (rand() % (max - min + 1)) + min;
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }

    printf("Gabarito:         ");
    for(int i=0;i<10;i++){
        gabarito[i] = (rand() % (max-min+1))+min;
        printf("%c ", gabarito[i]);
    }

    for(int i=0; i<5; i++){
        for(int j=0;j<10;j++){
            if(m[i][j]==gabarito[i]){
                repostaCerta++;
            }
        }
    }

    for(int i=0; i<5;i++){
        resultado[i]= repostaCerta;
        printf("\nA nota do aluno %i eh: %i ", i+1, resultado[i]);
    }
    return 0;

}