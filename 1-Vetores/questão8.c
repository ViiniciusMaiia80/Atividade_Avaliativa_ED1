/*08 - Fazer um algoritmo que leia dois conjuntos de 30 números inteiros. Calcule e 
escreva um terceiro conjunto fruto da intercalação dos dois primeiros.   */

#include <stdio.h>
#include <stdlib.h>
#define X 30
int conjunto1[X], conjunto2[X], conjunto3[X];
int main(){
    printf("conjunto1[%i]:", X);
    for(int i=0
        ;i<=X;i++){
        conjunto1[i]=i;
        printf("%i ", conjunto1[i]);
    }
     printf("\nconjunto2[%i]:",X);
    for(int i=0;i<=X;i++){
        conjunto2[i]=-i;
        printf("%i ", conjunto2[i]);
    }
    printf("\nconjunto3[%i]:", X);
    for(int i=0;i<=X;i++){
        if(i%2==0){
            conjunto3[i]=conjunto1[i];
        }
        if(i %2!=0){
            conjunto3[i]=conjunto2[i];
        }
        printf("%i ",conjunto3[i]);
    }
    return 0;
}