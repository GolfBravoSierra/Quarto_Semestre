//Elabore um programa que leia quantos números o usuário desejar, cada número lido o usuário deverá determinar se o mesmo é primo ou não

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, i, j , cont = 0;
    
    printf("digite quantos numeros vc quer: ");
    scanf("%d", &j);

    for (int p = 0; p < j; p++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                cont++;
            }
        }

        if (cont == 2)
        {
            printf("O numero %d eh primo\n", num);
        }
        else
        {
            printf("O numero %d nao eh primo\n", num);
        }
        cont = 0;
    }

    return 0;
}
