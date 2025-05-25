/*11 - Em uma fábrica trabalham homens e mulheres divididos em três classes:  
• Trabalhadores que fazem até 30 peças por mês – classe 1;  
• Trabalhadores que fazem de 31 a 35 peças por mês – classe 2;  
• Trabalhadores que fazem mais de 35 peças por mês – classe 3.  
A classe 1 recebe salário-mínimo (R$1518,00). A classe 2 recebe salário-mínimo 
mais 3% do salário-mínimo por peça acima das 30 peças iniciais. A classe 3 recebe 
salário-mínimo mais 5% do salário-mínimo por peça fabricada acima das 30 peças 
iniciais. A fábrica possui 15 operários.  
Faça um programa que leia para cada operário: o seu número (inteiro), o número de 
peças fabricadas no mês e seu sexo (1 para masculino ou 2 para feminino). Os 
dados devem ser armazenados em 3 vetores: vetNumOp, vetNumPecas e vetSexo 
respectivamente. O programa deve calcular os salários dos funcionários, 
armazená-los em um quarto vetor (vetSalarios) e mostrar um relatório que 
contenha o número do operário, a quantidade de peças fabricadas no mês e o seu 
salário. O programa deve mostrar também o total da folha de pagamento da fábrica.*/
#include <stdio.h>
#include <stdlib.h>
#define X 15
#define SALARIOMINIMO 1518.00


void lerDados(int vetNumOp[], int vetNumPecas[], int vetSexo[]){
    for(int i=0;i<X;i++){
        vetNumOp[i]=i+1;
        vetNumPecas[i]=30+rand()%(60-30+1);
        vetSexo[i]=1+rand()%2; 
    }
}
float calcularSalario(int vetNumPecas[], float vetSalario[]){
    float folhaDePagamento=0;
    for(int i=0;i<X; i++){
        if(vetNumPecas[i]<=30){
            vetSalario[i]= SALARIOMINIMO;
        }else if(vetNumPecas[i]<=35){
            vetSalario[i]= SALARIOMINIMO + (SALARIOMINIMO*0.03)*(vetNumPecas[i]-30);
        }else{
            vetSalario[i]= SALARIOMINIMO + (SALARIOMINIMO*0.05)*(vetNumPecas[i]-30);
        }
        folhaDePagamento+=vetSalario[i];
    }
 return folhaDePagamento;
}
void exibirRelatorio(int vetNumOp[], int vetNumPecas[], float vetSalario[], float folhaDePagamento){
    //mostrar um relatório que contenha o número do operário, a quantidade de peças fabricadas no mês e o seu salário. O programa deve mostrar também o total da folha de pagamento da fábrica
    printf("Relatorio da fabrica : \n%.2f - Folha de pagamento", folhaDePagamento);
    for(int i=0;i<X;i++){
        printf("\n%i - Numero do operario", vetNumOp[i]);
        printf("\n%i - Pecas fabricadas", vetNumPecas[i]);
        printf("\n%.2f - Salario\n",vetSalario[i]);
    }
    
}
int main(){
    int vetNumOp[X], vetNumPecas[X], vetSexo[X];
    float vetSalario[X], folhaDePagamento;
    lerDados(vetNumOp, vetNumPecas, vetSexo);
    folhaDePagamento = calcularSalario(vetNumPecas,vetSalario);
    exibirRelatorio(vetNumOp,vetNumPecas, vetSalario, folhaDePagamento);
    return 0;
}