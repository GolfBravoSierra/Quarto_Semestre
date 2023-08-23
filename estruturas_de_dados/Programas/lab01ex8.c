/* Elabore um programa que contenha uma função recursiva para
encontrar o menor elemento de um vetor*/

#include <stdio.h>
#include <stdlib.h>

int menor(int *vetor, int n){
    if(n == 1){
        return vetor[0];
    }else{
        int x = menor(vetor, n-1);
        if(x < vetor[n-1]){
            return x;
        }else{
            return vetor[n-1];
        }
    }
}

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int *vetor = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("O menor elemento do vetor eh: %d\n", menor(vetor, n));
    free(vetor);
    return 0;
}