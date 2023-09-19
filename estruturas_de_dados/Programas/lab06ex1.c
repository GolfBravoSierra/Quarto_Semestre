#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct no// .........................struct de um no da fila 
 {
    int info;// .............................seção para a informação 
    struct no* prox;// ......................seção para o indereçõs do proximo dado
 } No;// ....................................definindo o nome da struct para No

 typedef struct fila // .....................struct que cria  fila 
 {
    No *ini; // .............................um nó para o inicio 
    No *fim; // .............................um nó para o final 
 }Fila;// ...................................definindo o nome da struct para Fila

 Fila* CriaFila()// .........................essa função aloca um espaço na memoria para a fila e devolve para a main o indereço desse local reservado
 {
    Fila* f = (Fila*)malloc(sizeof(Fila)); //aqui onde é feito a reserva de epaço
    f->ini = f ->fim = NULL;// ..............e aqui as variaveis são limpas com o  Null para ter serteza que não tem lixo dentro ledas
    return f;// .............................retorna o valor do indereço da memoria reservada
 }

 No* ins_fim(No* fim , float valor)// .......função apra inseri o valor no final da fila para caso ele não esteja vazia 
 {
    No* p = (No*)malloc(sizeof(No));// ......cira uma variavel tipo nó para ajudar no processo 
    p -> info = valor; // ...................a seção de info recebe o valor a ser inserido 
    p -> prox = NULL;// .....................e a seção prox revebe o endereço do poximo elemento da fila
    if(p -> prox != NULL) // ................verifica se a seção proximo é diferente de vazio se sim 
    fim->prox = p;//......................... o a seção do prox do fim recebe o valo do p 
    return p;//..............................retorna  o valor de p para a função inseri
 }
 void inseri(Fila* f , int valor)// .........função para inseri um valor na fila 
 {
        f -> fim = ins_fim(f->fim , valor);//usando a função ins_fim para inseri o valor no final da fila 
        if (f->ini == NULL)//................se a a secção ini de f estiver vazia 
        f->ini = f->fim;//...................o ini recebera o fim 
 }
//----------------------------------------------------------------------------------------------
/*Elabore uma função que conte quantos números pares possui uma fila e retorne esta quantidade*/
 int conta_pares(Fila* f)//..................função que conta quantos elementos pares tem na fila 
 {
    int count=0;//...........................variavel contador que vai receber a contagem de valores pares
    No* aux ;//........................ .....criando uma variavel do tipo Nó para auxiliar na função 
    for(aux=f->ini; aux != NULL;aux=aux->prox)// for para percorrer a fila olhado para os elementos dela 
    {//......................................para percorrer a fila a condição é aux ser diferente de NULL se caso seja verdadeira a aux vai receber o indereço do proximo
        if(aux->info%2==0)//.................para verificar se o numero é par o valor é dividido por dois caso o resto seja zero ele é par
        count ++;//..........................e com isso é somado mais um na variavel contador
        printf("%d", count);//...............print na tela para ver se o contador esta funcionando
    }
    return count;//..........................retorno do valor do contador para main
 }
//-----------------------------------------------------------------------------------------------
/*Elabore uma função que apague a informação 15 de uma fila se ela existir*/
   void apaga(Fila* f)//......................função para apagar um elemento da fila 
   {
      No* aux;//...............................criando uma variavel do tipo Nó para auxiliar na função 
      No* ant;//...............................criando uma variavel do tipo Nó para auxiliar na função 
      for(aux=f->ini; aux != NULL;aux=aux->prox)// for para percorrer a fila olhado para os elementos dela 
      {//......................................para percorrer a fila a condição é aux ser diferente de NULL se caso seja verdadeira a aux vai receber o indereço do proximo
         if(aux->info==15)//..................para verificar se o numero é igual a 15 
         {
               ant->prox=aux->prox;//............se for o elemento anterior ao 15 vai receber o indereço do proximo elemento do 15
               free(aux);//......................e o 15 vai ser apagado da memoria
         }
         ant=aux;//............................a variavel ant vai receber o indereço do aux para sempre ser o elemento anterior ao aux
      }
   }
//-----------------------------------------------------------------------------------------------
 int main()
 {
    int nume=0, valor=0, count=0;//..........declarando variaveis do tipo int
    Fila *fila;//............................criando um variavel do tipo fila para receber o endereço da fila que iremos criar 
    fila = CriaFila();//.....................criando a fila com a função cria fila e salvando o indereço dela na variavel "fila"
    printf("digite quantos elementos:");//...print na tela para pedir o totla de elementos na filha
    scanf("%d", &nume);//....................escaniando o numero de elemento da fila
    for(int i=1;i<=nume;i++)//...............for para inseri os elementos na pilha
    {
        printf("\n elemento %d:",i);//.......prinf na tela para informas qual elemento esta sendo pedido
        scanf("%d",&valor);//................escaniando o valor para por na fila
        inseri(fila,valor);//................inserindo o valor na fila a travez da função de incerção 
    }
    //.......................................imprimindo a quandidade de numeros pares e chamando a função ao mesmo tempo
    count=conta_pares(fila);
    printf("a quantidade de numeros pares he: %d", count);
    //.......................................chamando a função para apagar o numero 15 da fila
    apaga(fila);
    //.......................................imprimindo a novo fila sem o elemento 15
      printf("\n");
      for(No* aux=fila->ini; aux != NULL;aux=aux->prox)
      {   
         printf("%d ", aux->info);
      }


    return 0;
 }
