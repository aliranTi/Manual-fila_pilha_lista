#include <stdlib.h>
#include <stdio.h>

typedef struct no {
    struct no *prox;
    int dado;
} No;

typedef struct pilha {
    No * topo;
} Pilha;

Pilha * criar_pilha();
void percorrer_pilha(Pilha *p);
int pilha_vazia(Pilha *p);
int empilhar(Pilha *p, int dado);
int desempilhar(Pilha *p);


Pilha * criar_pilha() {
    Pilha *p = (Pilha *) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void percorrer_pilha(Pilha *p) {
    if(p->topo == NULL) {
        printf("fim da pilha\n");
        return;
    }
    printf("%d\n", p->topo->dado);
    percorrer_pilha(p->topo->prox);
}

int pilha_vazia(Pilha *p) {
    return p->topo == NULL;
}

int empilhar(Pilha *p, int dado) {
    No *novo = (No *) malloc(sizeof(No));
    novo->dado = dado;
    novo->prox = p->topo;
    p->topo = novo;
    return 1;
}

int desempilhar(Pilha *p) {
    if (pilha_vazia(p)) {
        printf("Pilha vazia\n");
        return -1;
    }
    No *aux = p->topo;
    int dado = aux->dado;
    p->topo = aux->prox;
    free(aux);
    return dado;
}

int main() {
    Pilha *p = criar_pilha();

    return 0;
}