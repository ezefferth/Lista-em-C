#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct{
    int primeiro;
    int ultimo;
    int itens [MAX];
}lista;

void CriaListaVazia(lista *l){
    l->primeiro = l->ultimo = 0;
}

int insere (lista *l, int item){
    if (l->ultimo == MAX){
        printf("Lista Cheia");
        return 0; //Falso
    }
    l->itens [l->ultimo] = item;
    l->ultimo++;
    return 1; //Verdadeiro
}

int remove (lista *l, int p){
    if (vazia(l) || p >= l->ultimo){
        printf ("Posicao invalida");
        return 0; //Falso
    }
    int V= l->itens[p];
    while (p+1 < l->ultimo){
        l->itens[p] = l->itens[p+1]
        p++;
    }
    l->ultimo--;
    return V;
}

int vazia(lista *l){
    return l->primeiro == l->ultimo;
}


int main()
{
    printf("\n");
    return 0;
}
