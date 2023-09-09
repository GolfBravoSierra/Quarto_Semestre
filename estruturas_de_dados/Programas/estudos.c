// estudo de alocação dinamica de structs para a proxima porva que vou ter 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct alunos// struct de aluno com as suas variaveis
{
    char nome;
    int idade;
    float autura;

} alu;//apelido da struct

alu *aloca(quanti) //função responsevel por alocar dinamicamente espaço para um vetor de struct do tipo aluno 
{
    alu *aux; // variavel aux que recebera o indereço do espaço alocado
    aux = (alu*)malloc(quanti*sizeof(alu));// alocando espaço na memoria para o vetor de struct e quardando o inderesso em aux
    return aux;// retornando aux para a main 
    free(aux);
}

int main()
{
    int quanti=0;// variavel que vai preceber o numero de alunos pelo usuario 
    alu *aluno;//variavel que vai recober o inderesso do vetorr de struct 
    printf("digite quantos alunos vc vai querer cadastra:");

    scanf("%d",&quanti);// escaniando a quantidade de alunos 
    printf("%d",quanti);
    aluno = aloca(quanti);// chamando a função de alocação para locar o vetor e passando o endereço alocado para aluno
    for(int i = 1; i <= quanti; i++ )
    {
        printf("digite o nome do aluno %d:",i);
        fflush(stdin);
        gets(&aluno[i].nome);
        printf("digite a idade do aluno %d",i);
        scanf("%d",&aluno[i].idade);
        printf("digite a autura do aluno %d",i);
        scanf("%d",&aluno[i].autura);
    }
    printf("%d",aluno[1].idade);
    printf("%d",aluno[2].idade);

    return 0;
}