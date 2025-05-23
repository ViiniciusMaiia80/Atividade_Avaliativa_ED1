/*05 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e 
escreva média aritmética.  */
#include <stdio.h>
#include <stdlib.h>
#define X 100
int conjunto[X], soma=0;

float media(){
    return soma/X;   
}
int main(){
    for(int i=0; i<X;i++){
        conjunto[i] = rand()%100;
        printf("Elemento do conjunto[%i]: %i\n", i, conjunto[i]);
        soma+=conjunto[i];
    }
    printf("A media do elementos do conjunto[%i] eh igual a: %f", X, media(conjunto[X]));
    return 0;
}