/*04 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e 
escreva a amplitude total deste conjunto.  */
#include <stdio.h>
#include <Stdlib.h>
#define X 100
int conjunto[X],maior=0,menor=0;

int calcularAmplitude(){
    
    return maior-menor;
}
int main(){
    
    printf("Elementos gerados automaticamente:\n");
    for(int i=0; i<X;i++){
        maior=menor=conjunto[i];
        conjunto[i]=rand()%15;

        printf("%i ", conjunto[i]);
        if(conjunto[i] > maior){
            maior= conjunto[i];
           }
        if(conjunto[i]<menor){
                menor = conjunto[i];
        }
    }
        printf("\nO maior elemento: %i\n O menor elemento: %i\nA amplitude do conjunto[%i] eh igual a %i", maior,menor,X,calcularAmplitude());
        return 0;
}
