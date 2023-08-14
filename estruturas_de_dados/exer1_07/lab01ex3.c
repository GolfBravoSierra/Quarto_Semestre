/*Elabore uma função que retorne o reverso de um número inteiro
informado. Exemplo n=1234 reverso=4321*/

#include <stdio.h>
#include <stdlib.h>


void invertendo(int *n){
    int aux = 0;

    while(*n > 0){
        aux = aux * 10 + *n % 10;
        *n /= 10;
    }

}

int main()
{
    int n;
    printf("digite um numero para ser invertido: ");
    scanf("%d", &n);
    invertendo(&n);
    printf("o numero invertido eh: %d", n);

    return 0;
}