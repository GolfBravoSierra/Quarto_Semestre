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
    int aux2, aux3;
    for (i = 0 ; i <= nalu ; i ++ )
    {
        if (aux1 < alunos[i].idade)
        {
            aux1 = alunos[i].idade;
            aux2 = alunos[i].matricula;
            aux3 = i;
        }
        else
            aux2 = aux2;
    }
   printf("aux3 = %d", aux3);
    return aux3;

}

mediapeso(int nalu, alu alunos[])
{
    int i;
    float aux = 0;
    for (i = 0 ; i <= nalu ; i ++ )
    {
        if (alunos[i].idade > 30 && alunos[i].idade < 40)
        {
            aux = aux + alunos[i].peso;

        }
        else
            aux = aux;
        
    }
    //printf("aux = %f",aux);
    aux = aux / i;
    //printf("aux = %f",aux);
    return aux;
}

infor(int nalu, alu alunos[])
{
    int i , aux2;
    float aux = 0;
    for (i = 0; i >=nalu ; i ++)
    {
        if (1 > alunos[i].altura)
        {
            aux = alunos[i].altura;
            aux2 = i;
        }
        else 
            aux = aux;
    }
    return aux2;
}

int main()
{
    int nalunos, matricula, mvelho ;
    float mpeso;
    char reposta;
    alu *alunos;

        printf("digite o numero de alunos:");
        scanf("%d",&nalunos);

        alunos = (alu *)malloc(nalunos*sizeof(alu));

        ler_dados(nalunos, alunos);




    matricula = verificapeso(nalunos, alunos);

    mvelho = verificaidade(nalunos, alunos);
    //mvelho = mvelho;
    printf("mvelho = %d", mvelho);

    mpeso = mediapeso(nalunos,alunos);
    printf("mpeso = %f", mpeso);

    infor(nalunos, alunos);

    printf("\n a matricula do aluno mais pesado he: %c", matricula);
    printf("\n a matricula do aluno mais velho he: %d", alunos[mvelho].matricula);
    printf("\n a idade do aluno mais velho he: %d", alunos[mvelho].idade);
    printf("\n a altura do aluno mais velho he: %f", alunos[mvelho].altura);
    printf("\n o peso do aluno mais velho he: %f", alunos[mvelho].peso);
    printf("\n a media de peso dos alunos entre 30 e 40 anos he: %f", mpeso);



    return 0;
}
