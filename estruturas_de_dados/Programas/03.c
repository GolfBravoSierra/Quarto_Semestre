//Um número natural n, com n>1, é dito deficiente se a soma de seus divisores próprios é inferior a ele. Elabore um programa em C de lela um número natural e determine se ele é deficiente. Exemplo n=8, divisores de 8=1, 2, 4. Somando seus divisores (1+2+4)=7<8. Portanto 8 é deficiente

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, i, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma = soma + i;
        }
    }

    if (soma < num)
    {
        printf("O numero %d eh deficiente\n", num);
    }
    else
    {
        printf("O numero %d nao eh deficiente\n", num);
    }

    return 0;
}