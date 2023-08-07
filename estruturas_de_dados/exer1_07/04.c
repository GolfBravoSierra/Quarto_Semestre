//Elabore um programa que leia um vetor de no máximo 50 posições e determine a média de seus elementos e quantos elementos são eriores a essa média

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[50], i, j, soma = 0, cont = 0;
    float media = 0;

    printf("Digite quantos numeros vc quer: ");
    scanf("%d", &j);

    for (i = 0; i < j; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
        soma = soma + vet[i];
    }

    media = soma / j;

    for (i = 0; i < j; i++)
    {
        if (vet[i] > media)
        {
            cont++;
        }
    }

    printf("A media eh %.2f\n", media);
    printf("Existem %d numeros maiores que a media\n", cont);

    return 0;
}