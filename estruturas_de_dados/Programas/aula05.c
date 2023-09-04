#include <stdio.h>
#include <stdlib.h>

struct no// nó da lista para amrazenar 
{
int info;
struct no* prox;
};
typedef struct no No;

struct pilha //Estrutura que armazena o indereço do topo da pilha
{
    No*topo;
};
typedef struct pilha Pilha;

Pilha* Cria(){//funçãi que cria a struct pilha 
    Pilha* p;
    p=(Pilha*)malloc(sizeof(Pilha));
    p->topo=NULL;
    return p;
}

int vazia(Pilha* p){// função para verificar se a pilha esta vazia
    if(p->topo == NULL)
        return 1;
    else
        return 0;
}


void push (Pilha* p, int v){  // função que coloca um novo elemento na pilha
    No* n=(No*)malloc(sizeof(No));
    n->info=v;
    n->prox=p->topo;
    p->topo=n;
};

int conta_pilha(Pilha* p){// função de contar quantos elementos tem na pilha
    int  count=0;
    No  *aux=p->topo;
    while(aux != NULL)
    {
        aux = aux -> prox;
        count ++;
    }

    return count;
}

No* ret_ini(No* I){// essa função muda o topo da pilha para o proximo elemento
    No* p = I -> prox; 
    free(I);
    return p;
}

int pop(Pilha* p){// funçãoa que retira um elemento da pilha
    int aux ; 
    aux = p -> topo -> info;
    p -> topo = ret_ini(p->topo);
    return aux;
}

Pilha* inverte(Pilha* p){
    Pilha *P_aux = Cria();
    while(vazia(p))
    {
        push(P_aux,pop(p));
    }
    return P_aux;
}

int main(){

    int n, v, count, aux2;
    No *aux1;
    Pilha *p;

    printf("digite quantos elementos deseja armazenar na pilha: ");
    scanf("%d", &n);

    p = Cria();
    printf("Pilha criada\n");

    for(int i = 0; i < n; i++){
        printf("digite o numero que deseja inserir na pilha na posicao %d:", i+1); 
        scanf("%d", &v);
        push(p,v);
    }

    count = conta_pilha(p);
    printf("\n a pilha tem: %d", count);

    p = inverte(p);
    aux1 = p -> topo;
    for(int i = 0 ; i <= count ; i++)
    {   
        aux1 = aux1 -> prox;
        aux2 =  aux1 -> info;
        printf("%d", aux2);
        printf("ola mundo");
    }
    return 0;
}