// estudo de alocação dinamica de structs para a proxima porva que vou ter 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 typedef struct no // função que cria a lista no caso um nó da lista nesse nó iremos emcontra um espaço para informação do tipo int e um espço para ponterio que apontará para o proximo elemento da lista
{
    int info;
    struct no *prox;
}lista;

lista* seta(void)// limpando o inicio da fila para ter certeza que a memoria não tem lixo 
{
    return NULL;
}

lista* inseri(lista* inicio, int valor)// função para inseri elemento na lista 
{
    lista* novo;// variavel novo é do tipo lista ele sera o novo bloca que sera encaixado na lista 
    novo =(lista*)malloc(sizeof(lista));// antes dele receber o valor temos que alocar um espaço para ele na memoria fazemos isso aqui

    novo ->info = valor;// aqui a "seção" de valor da variavel novo recebe o valor que desexamos inseri 
    novo ->prox = inicio;// aqui ela recebe o valor do indereço do inicio da fila 
    return novo;//agora com o indereco e com  valor ja guardados dentro da variavel novo retormanos ele para a main
}

lista* retira(lista* aux)
{
    int valor;// valor recebera o int que esta no bloco da lista
    valor = aux->info;//com isso ele recebe da aux que esta com o indereço da lista a parte da info que esta com o int 

    return valor;// e retornamos o valor retirado da lista para main
}

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
    /*
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
    */

    lista* inicio;// criando uma variavel do tipo lista que recebera o endereco do primeiro elemento da lista
    inicio = seta();// a variavel iicio recebe o endereço do primerio elemento da lisata 
    int valor, imprimi;

    valor = 1;
    inicio = inseri(inicio,valor);//onde a mesma sera transferida para uma variavel inicio que revebe o indereco de novo ja que ele é o novo primeiro elemento da lista
    imprimi = retira(inicio);

    printf("%d",imprimi);
    return 0;
}