#include <stdlib.h>
#include <stdio.h>

typedef struct no {
    int dado;
    struct no *prox;
} No;

typedef struct fila {
    No *inicio;
    No *fim;
} Fila;

Fila * criar_fila();
int fila_vazia(Fila *f);
int enfileirar(Fila *f, int dado);
int desenfileirar(Fila *f);
void percorrer_fila(Fila *f);


Fila * criar_fila() {
    Fila *f = (Fila *) malloc(sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

int fila_vazia(Fila *f) {
    return f->inicio == NULL;
}

int enfileirar(Fila *f, int dado) {
    No *novo = (No *) malloc(sizeof(No));
    novo->dado = dado;
    novo->prox = NULL;
    if (fila_vazia(f)) {
        f->inicio = novo;
    } else {
        f->fim->prox = novo;
    }
    f->fim = novo;
    return 1;
}

int desenfileirar(Fila *f) {
    if (fila_vazia(f)) {
        printf("Fila vazia\n");
        return -1;
    }
    No *aux = f->inicio;
    int dado = aux->dado;
    f->inicio = aux->prox;
    free(aux);
    return dado;
}

void percorrer_fila(Fila *f) {
    if (fila_vazia(f)) {
        printf("Fila vazia\n");
        return;
    }
    printf("%d\n", f->inicio->dado);
    percorrer_fila(f->inicio->prox);
}



int main() {
    Fila *f = criar_fila();

    return 0;
}