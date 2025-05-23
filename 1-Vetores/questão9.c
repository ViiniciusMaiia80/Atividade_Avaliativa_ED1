/*09 - Fazer um algoritmo que leia dois conjuntos de 30 números inteiros. Ambos os 
conjuntos já foram lidos ordenados. Calcule e escreva um terceiro conjunto fruto 
da intercalação, também ordenada, dos dois primeiros. */
#include <stdio.h>
#define X 30

int main(){
    int conjunto1[X], conjunto2[X],conjunto3[X];

    printf("\nConjunto 1: ");
    for(int i=0;i<X;i++){
        conjunto1[i]=i;
        printf("%i ", conjunto1[i]);
    }

    printf("\nConjunto 2: ");
    for(int i=0;i<X;i++){
        conjunto2[i] = -i;
        printf("%i ", conjunto2[i]);
    }

    printf("\nConjunto 3: ");
    for(int i=0;i<X;i++){
        if(i%2==0){
            conjunto3[i] = conjunto1[i];
        }
        if(i%2!=0){
            conjunto3[i]=conjunto2[i];    
        }
        printf("%i ", conjunto3[i]);
    }
    return 0;
}