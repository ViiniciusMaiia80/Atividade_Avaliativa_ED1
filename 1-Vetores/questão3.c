/*03 - Fazer um algoritmo que leia um conjunto de 100 números inteiros; leia também 
um valor para variável x e verifique se o valor de x existe no conjunto lido. */

#include <stdio.h>
#include <stdlib.h>
#define X 100

int main(){
    int conjunto[X], x,estaContido=0;

    printf("Os elementos do conjunto:\n");
    for(int i=0; i<X;i++){
        conjunto[i] = rand()%10;
        printf("%i ", conjunto[i]);
    }
    printf("\nDigite qual elemento voce deseja pesquisar no conjunto: ");
    scanf("%i", &x);

    for(int i=0;i<X;i++){
         if(conjunto[i]==x){
            estaContido++;
         }
    }
    if(estaContido){
        printf("O valor %i esta contido no conjunto", x);
    }else{
        printf("O elemento digitado nao esta no conjunto.");
    }
    return 0;
}