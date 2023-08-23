#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    int matricula, idade;
    float peso, altura;

} alu ;

void ler_dados(int nalu, alu alunos[])
{
    for (int i = 1 ; i <= nalu ; i++)
    {
        printf("\n digite a matruicula do aluno %d:", i);
        scanf("%d", &alunos[i].matricula);
        printf("\n digite a idade do aluno %d:", i);
        scanf("%d", &alunos[i].idade);
        printf("\n digite o peso do aluno %d:", i);
        scanf("%f", &alunos[i].peso);
        printf("\n digite a altura do aluno %d:", i);
        scanf("%f", &alunos[i].altura);
    }


}

float verificapeso(int nalu, alu alunos[])
{
    float aux1;
    int aux2;
    for (int i = 1 ; i <= nalu ; i ++ )
    {
        if (aux1 < alunos[i].peso)
        {
            aux1 = alunos[i].peso;
            aux2 = alunos[i].matricula;
        }
        else
            aux2 = aux2;
    }

return aux2;
}
int verificaidade(int nalu, alu alunos[])
{
    int aux1 ,i ;
    int aux2;
    for (i = 0 ; i <= nalu ; i ++ )
    {
        if (aux1 < alunos[i].idade)
        {
            aux1 = alunos[i].idade;
            aux2 = alunos[i].matricula;
        }
        else
            aux2 = aux2;
    }
    printf("i = %d", i);
    return i;

}

int main()
{
    int nalunos, matricula, mvelho;
    alu *alunos;
    printf("digite o numero de alunos:");
    scanf("%d",&nalunos);

    alunos = (alu *)malloc(nalunos*sizeof(alu));

    ler_dados(nalunos, alunos);

    matricula = verificapeso(nalunos, alunos);

    mvelho = verificaidade(nalunos, alunos);
    printf("mvelho = %d", mvelho);

    printf("\n a matricula do aluno mais pesado he: %d", matricula);
    printf("\n a matricula do aluno mais velho he: %d", alunos[mvelho].matricula);
    printf("\n a idade do aluno mais velho é %d", alunos[mvelho].idade);
    printf("\n a altura do aluno mais velho he: %f", alunos[mvelho].altura);
    printf("\n o peso do aluno mais velho he: %f", alunos[mvelho].peso);



    return 0;
}
