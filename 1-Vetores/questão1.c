/*01 - Fazer um algoritmo que leia a nota de 10 alunos de uma disciplina. Calcule e
escreva o número de alunos que tiveram notas superior à média da turma. */
#include <stdio.h>
#define T 10
int main(){

    int i=0;
    float alunosAcimaMedia;
    float notas[T]; 
    float media; 
    float soma;


    for(i=1; i<=10; i++){
        printf("Digite a nota do aluno %d:", i);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma/10;
    printf("%f\n", media);

    for(i=1; i<=10; i++){
        if(notas[i]>=media){
            alunosAcimaMedia++;
        }
    }

    printf("O numero de alunos com nota acima da media e: %.f", alunosAcimaMedia);
    

return 0;
}