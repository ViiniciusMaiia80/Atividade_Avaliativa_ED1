/*03 - Declare em C matriz 5 x 5. Preencha com 1 a diagonal principal 
e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>
#include <stdlib.h>
#define X 5

void preencherDiagonalcom1(int m[X][X]){
    for(int i=0;i<X;i++){
        for(int j=0;j<X;j++){
            if(i==j){
                m[i][j]= 1;
            }else{
                m[i][j]=0;
            }
        }
    }
}
void exibirMatriz(int m[X][X]){
    printf("matriz com diagonal 1: \n");
    for(int i=0;i<X;i++){
        for(int j=0; j<X;j++){
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m[X][X];
    preencherDiagonalcom1(m);
    exibirMatriz(m);

    return 0;
}