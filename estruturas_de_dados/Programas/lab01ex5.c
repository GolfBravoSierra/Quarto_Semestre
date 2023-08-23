/*Faça uma função que faça a rotação de três números. Tais números
precisam ser passados como parâmetros, por referência. Por exemplo,
se a função receber os valores 5 8 e 9, nesta ordem, os valores de saída
nessas variáveis serão 8, 9 e 5, respectivamente.*/
#include <stdio.h>
#include <stdlib.h>

void rotacao(int *a, int *b, int *c){
    int aux;
    aux = *a;
    *a = *b;
    *b = *c;
    *c = aux;
}

int main(){
    int a, b, c;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    rotacao(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
