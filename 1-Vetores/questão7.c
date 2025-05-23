/*07 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e 
escreva raiz média quadrática. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define X 100
int conjunto[X], somaDosQuadrados=0;
float raizQuadMedia;

float media(){
    return somaDosQuadrados/X;
}

int main(){
    
    for(int i = 0; i<=X;i++){
        conjunto[i]=rand()%20;
        printf("%i ", conjunto[i]);
        somaDosQuadrados+=conjunto[i]*conjunto[i];
    }

    for(int i=0; i<=X;i++){
        raizQuadMedia=sqrt(media());
    }
    printf("A raiz media quadratica eh igual a: %f", raizQuadMedia);
    return 0;
}