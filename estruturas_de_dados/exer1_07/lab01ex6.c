/*A multiplicação de dois números inteiros pode ser feita através
de somas sucessivas. Construa um algoritmo recursivo
MultipRec(n1,n2) que calcule a multiplicação de dois inteiros  */
#include <stdio.h>
#include <stdlib.h>

int MultipRec(int n1, int n2){
    if(n2 == 1){
        return n1;
    }else{
        return n1 + MultipRec(n1, n2-1);
    }
}

int main(){
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("O resultado da multiplicacao e: %d", MultipRec(n1, n2));
    return 0;
}