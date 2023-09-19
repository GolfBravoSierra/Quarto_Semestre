/*Construa uma função que duplique uma lista dinâmica. O cabeçalho da função deve ser:
Lista * Duplica(Lista *p)*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

Lista * Duplica(Lista *p){
    Lista *q = NULL;
    Lista *aux = p;
    Lista *aux2 = NULL;
    while(aux != NULL){
        if(q == NULL){
            q = (Lista *)malloc(sizeof(Lista));
            q->info = aux->info;
            q->prox = NULL;
            aux2 = q;
        }else{
            aux2->prox = (Lista *)malloc(sizeof(Lista));
            aux2 = aux2->prox;
            aux2->info = aux->info;
            aux2->prox = NULL;
        }
        aux = aux->prox;
    }
    return q;
}
/*Fazer uma função para inverter uma lista L1 colocando a lista resultante em L2.*/


// Invert a list
Lista * Inverte(Lista *originalList){
    Lista *newList = NULL; // The new list
    Lista *aux = originalList; // aux is the original list
    Lista *aux2 = NULL; // aux2 is the new list
    while(aux != NULL){
        if(newList == NULL){ // If newList is empty, make newList the same as aux
            newList = (Lista *)malloc(sizeof(Lista));
            newList->info = aux->info;
            newList->prox = NULL;
            aux2 = newList;
        }else{ // else, add the value of aux to aux2
            aux2->prox = (Lista *)malloc(sizeof(Lista));
            aux2 = aux2->prox;
            aux2->info = aux->info;
            aux2->prox = NULL;
        }
        aux = aux->prox;
    }
    return newList;
}



int main(){
    Lista *p = NULL;
    Lista *q = NULL;
    Lista *aux = NULL;
    int i;
    for(i = 0; i < 10; i++){
        if(p == NULL){
            p = (Lista *)malloc(sizeof(Lista));
            p->info = i;
            p->prox = NULL;
            aux = p;
        }else{
            aux->prox = (Lista *)malloc(sizeof(Lista));
            aux = aux->prox;
            aux->info = i;
            aux->prox = NULL;
        }
    }
    q = Duplica(p);
    aux = q;
    while(aux != NULL){
        printf("%d\n", aux->info);
        aux = aux->prox;
    }
    return 0;
}