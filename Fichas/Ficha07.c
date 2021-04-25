#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula {
    char *palavra;
    int ocorr;
    struct celula * prox;
} * Palavras;

// 1

void libertaLista (Palavras l) {
    if (l != NULL) {
        libertaLista(l->prox);
        free(l);
    }
}

// 2

int quantasP (Palavras l){
    int palavras = 0;
    for (; l != NULL; l = l->prox) {
        if (l->palavra != NULL)
            palavras++;
    }
    return palavras;
}

// 3

void listaPal (Palavras l) {
    for (; l != NULL; l = l->prox) {
        printf("%s\n", l->palavra);
    }
}

// 4

char * ultima (Palavras l) {
    for (; l->prox != NULL; l = l->prox);
    return l->palavra;
}

// 5

Palavras acrescentaInicio (Palavras l, char *p) {
    Palavras nova_palavra = malloc(sizeof(struct celula));
    nova_palavra->palavra = p;
    nova_palavra->ocorr = 1;
    nova_palavra->prox = l;
    return nova_palavra;
}

// 6

Palavras acrescentaFim (Palavras l, char *p) {
    Palavras nova_palavra = malloc(sizeof(struct celula));
    nova_palavra->palavra = p;
    nova_palavra->ocorr = 1;
    nova_palavra->prox = NULL;
    if (l == NULL) l = nova_palavra;
    else {
        Palavras ultima_palavra = l;
        for (; ultima_palavra->prox != NULL; ultima_palavra = ultima_palavra->prox);
        ultima_palavra->prox = nova_palavra;
    }
    return l;
}

// 7

Palavras acrescenta (Palavras l, char *p) {
    if (l == NULL) l = acrescentaFim(l, p);
    else {
        Palavras last = l;
        for (; last != NULL; last = last->prox) {
            if (last->palavra == p) {
                last->ocorr++;
                return l;
            }
        }
        l = acrescentaFim(l, p);
    }
    return l;
}

// 8

struct celula * maisFreq (Palavras l) {
    int max = 0;
    Palavras mais_freq = malloc(sizeof(struct celula));
    for (; l != NULL; l = l->prox) {
        if (l->ocorr > max) {
            max = l->ocorr;
            mais_freq = l;
        }
    }
    return mais_freq;
}

int main () {
    return 0;
}