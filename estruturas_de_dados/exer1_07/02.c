// Define-se como o quadrado de um número positivo Nà soma dos N
//primeiros números impares positivos, por exemplo:
//3²-1+3+5=9 (soma dos 3 primeiros impares) -6²=1+3+5+7+9+11=36 (soma dos 6 primeiros impares)
//Elabore um programa em C que leia um número positivo Ne determine seu quadrado pela soma dos seus N números impares

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Ne = 0, N = 1, Na = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &Ne);

        for (int i = 1; i <= Ne; i++)
           {
                printf("i %d\n", i);
                printf("impar %d\n", N);
                printf("soma %d\n", Na);
                Na = Na + N;
                N = N + 2;
                
           }
    printf("O quadrado de %d eh %d\n", Ne, Na);
    return 0;
}