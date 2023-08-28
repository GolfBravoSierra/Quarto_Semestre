/*• Construa o programa em C
1. Construa, em C, um programa que contenha as seguintes funções de
Lista Encadeada- Básica
• Inserção de um Elemento da Lista (pode ser o primeiro)
• Remoção de um Elemento da Lista (pode ser o primeiro)
• Impressão da Lista
• Uma função que verifica se a lista está vazia, retorna 1 se ela estiver
vazia e 0 caso contrário
• Uma função que retorne a quantidade de elementos de uma lista. A
lista é passada por parâmetro .
• Uma função que some os elementos de uma lista que é passada por
parâmetro
• Uma função que receba duas listas e retorne uma terceira lista que é a
união dessas duas listas (Não é permitido elementos repetidos na Luista
União)
ED – AULA 04
• Construa o programa em C
*/

#include <stdio.h>
#include <stdlib.h>

struct no
{
int info;
struct no *prox;
};
typedef struct no lista;

lista* inicializa (void)
{
return NULL;
};

lista* inserir(lista* inicio, int valor){
    lista *novo;
    novo =(lista*)malloc(sizeof(lista));
    novo->info = valor;
    novo->prox = inicio;
    return novo;
}

 lista* remover(lista* ini){
    lista *aux=ini;
    ini = ini->prox;
    printf("\n\tValor Removido = %d",aux->info);
    free(aux);
    return  ini;
 }

int verifica(lista*inicio , int *valor){
    int cheque;
    for(int i=0 ; i <= *valor ; i++){
        lista *aux=inicio;
        inicio = inicio->prox;
        if(aux->info != 0){
            cheque=1;
        }
        else{
            cheque=0;
        }
    }
    return cheque;
}

int main (){
     
    int recebi, valor;
    int cheque;
    lista* inicio;
    inicio = inicializa();

    printf("digite quantos elementos vc que na lista:\t");// perguntando e scaniando a quantidade de valores da lista 
    scanf("%d", &valor);

    for(int i=1 ; i <= valor ; i++){
        printf("digite um valor para inseri na lista:\t");// pedindo elementos para inseri na lista 
        scanf("%d", &recebi);
        inicio = inserir(inicio, recebi); 
    }

    printf("imprimindo a lista:\n");// for par aimprimir a lista 
    for(int i = 1 ; i <= valor ; i++){
        inicio = remover(inicio);
        //printf("%d", i);
    }
    printf("ola mundo");
    cheque = verifica(inicio, &valor);
    printf("a lista esta: %d", cheque);


    return 0;
}