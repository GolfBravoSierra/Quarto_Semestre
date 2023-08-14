//Faça uma função que leia cinco valores inteiros e imprima, no
//programa principal, o maior e o menor valor

#include <stdio.h>
#include <stdlib.h>

void function(int *Pmaior , int *Pmenor)
{
    int  num = 0, maior = 0, menor = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;


    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num > maior)
        {
            maior = num;
        }
        if (num < menor)
        {
            menor = num;
        }
    }
    *Pmaior = maior;
    *Pmenor = menor;

}
int main()
{
    int maior, menor;
    function(&maior, &menor);
    printf(" maior: %d \n menor: %d\n", maior, menor);

    return 0;
}