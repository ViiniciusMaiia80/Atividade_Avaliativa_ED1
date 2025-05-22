/*2 - Implementar um algoritmo que leia um conjunto de 50 elementos inteiros e os 
imprima em ordem contrária da que foi lida.*/
#include <stdio.h>
#include <stdlib.h>
#define X 50

int main(){
    int conjunto[X];
    printf("Ordem dos elementos do conjunto\n");
    for(int i=0; i<X; i++){
        conjunto[i] = rand()%10;
        printf("%i\n", conjunto[i]);   
    }
    printf("A ordem inversa dos elementos do conjunto:\n");
    for(int i=X-1; i>=0; i--){
        printf("%i\n", conjunto[i]);
        i--;
    }
    return 0;
}
