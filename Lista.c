#include <stdlib.h>
#include <stdio.h>

typedef struct no {
    struct no *prox;
    int dado;
} No;

typedef struct lista {
    No *inicio;
} Lista;

Lista * criar_lista();
void percorrer_lista(Lista *l);
Lista * buscar_fim(Lista *l);
int lista_vazia(Lista *l);
void inserir_no_fim(Lista *l, int dado);
int remover(Lista *l);
int remover_fim(Lista *l);
void inserir_no_inicio(Lista *l, int dado);

Lista * criar_lista() {
    Lista *l = (Lista *) malloc(sizeof(Lista));
    l->inicio = NULL;
    return l;
}

void percorrer_lista(Lista *l) {
    if (lista_vazia(l)) {
        printf("Fim da Lista\n");
        return;
    }
    printf("%d\n", l->inicio->dado);
    percorrer_lista(l->inicio->prox);
}

Lista * buscar_fim(Lista *l) {
    if (l->inicio->prox == NULL) {
        return l->inicio;
    }
    return buscar_fim(l->inicio->prox);
}

int lista_vazia(Lista *l) {
    return l->inicio == NULL;
}

void inserir_no_fim(Lista *l, int dado) {
    No *novo = (No *) malloc(sizeof(No));
    novo->dado = dado;
    novo->prox = NULL;
    if (lista_vazia(l)) {
        l->inicio = novo;
    } else {
        No *fim = buscar_fim(l);
        fim->prox = novo;
    }
}

void inserir_no_inicio(Lista *l, int dado) {
    No *novo = (No *) malloc(sizeof(No));
    novo->dado = dado;
    novo->prox = l->inicio;
    l->inicio = novo;
}

int remover(Lista *l) {
    if (lista_vazia(l)) {
        printf("Lista vazia\n");
        return -1;
    }
    No *aux = l->inicio;
    int dado = l->inicio->dado;
    l->inicio = aux->prox;
    free(aux);
    return dado;
}

int remover_fim(Lista *l) {
    if (lista_vazia(l)) {
        printf("Lista vazia\n");
        return -1;
    }
    No *aux = l->inicio;
    if (aux->prox == NULL) {
        int dado = aux->dado;
        free(aux);
        l->inicio = NULL;
        return dado;
    }
    return remover_fim(l->inicio->prox);
}

int main() {
    Lista *l = criar_lista();
    


    return 0;
}