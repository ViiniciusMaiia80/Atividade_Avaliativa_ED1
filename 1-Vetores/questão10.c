/*10 - Elabore um algoritmo para armazenar em um vetor V1 todos os valores inteiros 
positivos desde 1 até 50. Em seguida transporte todos os elementos primos do vetor 
V1 para um vetor V2. Imprima no final os dois vetores. */
#include <stdio.h>

#define X 50
int v1[X],v2[X], i=0,j=0;
int ehPrimo(int numero){
    if(numero<2){
        return 0;
    }
    for(int i=2;i*i<=numero;i++){
        if(numero%i==0){
            return 0;
        }
    }
    return 1;
    
}
int main(){
    for(i=1;i<X;i++){
        v1[i]=i;
    }
    
    for(i=0; i<=X;i++){
        if(ehPrimo(v1[i])){
            v2[j]=v1[i];
            j++;
            printf("%i ", v2[j]);
        }
    }
    printf("\nV1[%i]: ", X);
    for(i=1;i<X;i++){
        printf("%i ", v1[i]);
    }
    printf("\nV2[%i]: ", X);
    for(int i=0; i<j;i++){
        printf("%i ", v2[i]);
    }
         
    return 0;
}

