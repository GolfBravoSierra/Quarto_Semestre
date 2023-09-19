void push (Pilha* p, float v){   p->prim = ins_ini(p->prim,v);}
/*Elabore uma função que conte quantos números pares possui uma fila e retorne esta quantidade*/
int conta_pares(Fila* f){
    int count=0;
    No* aux ;
    for(aux=f->ini; aux != NULL;aux=aux->prox){
        if(aux->info%2==0)
        count ++;
        printf("%d", count);
    }
    return count;
}
/*elabore uma função que divida um numro por dois e diga se ele é ou não par*/
void divi(Fila* f){
    int count=0;
    No* aux ;
    for(aux=f->ini; aux != NULL;aux=aux->prox){
        if(aux->info%2==0)
        count ++;
        printf("%d", count);
    }
    return count;
}
/*crie um função que pegue um valor inserido pelo usuario e diga se ele é ou não par*/
