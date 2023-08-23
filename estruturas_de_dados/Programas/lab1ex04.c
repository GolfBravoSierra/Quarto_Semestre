//Faça uma função que receba um vetor v, o número n de elementos do
//vetor v ( máximo 15 elementos) e um valor x. Retorne verdade caso x
//for igual a algum dos elementos de v, e falso caso contrário.

#include <stdio.h>
#include <stdlib.h>

int verifica(int *v, int *n, int *x){
    
    int Px = *x;
    for(int i=0;i<*n;i++){
        if(v[i]==Px){
            return 1;
        }
    }
    return 0;
}

int main(){
    int v[15], n, x, i, vari=0;
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);
    printf("Digite os elementos do vetor: ");
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    vari = verifica(&v, &n, &x);

    if (vari==1){
        printf("Verdadeiro");
    }
    else{
        printf("Falso");
    }
}
