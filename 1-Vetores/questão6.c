/*06 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e 
escreva o desvio médio. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define X 100

int conjunto[X], soma=0;
float media, desvio=0;
int main(){

    for(int i=0; i<X;i++){
        conjunto[i] = rand()%20;
        printf("%i ", conjunto[i]);
        soma+=conjunto[i];
    }
    media = soma/X-1;

    for(int i=0; i<X; i++){
        desvio += fabs(conjunto[i]-media);
    }

    desvio/=X;
    printf("\n A media eh igual a: %.2f", media);
    printf("\nO desvio medio do conjunto[%i] eh igual: %.2f", X, desvio);
    

return 0;
}