#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

// aux

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// 1

int nota (Aluno a) {
    double soma_miniT = 0;
    for (int i = 0; i < 6; i++) {
        soma_miniT += a.miniT[i];
    }
    return round((soma_miniT/12)*6 + a.teste*0.70);
}

// 2

int procuraNum (int num, Aluno t[], int N) {
    int len = N - 1;
    N = N/2;
    while (N >= 0 && N <= len) {
        if(t[N].numero == num) return N;
        else if (t[N].numero < num) N = N + N/2; 
        else if (t[N].numero > num) N = N/2;
    }
    return -1;
}

// 3

void ordenaPorNum (Aluno t [], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i; j < N - 1; j++) {
            if (t[j].numero > t[j+1].numero) swap(&t[j].numero, &t[j+1].numero);
        }
    }
}

// 4

void criaIndPorNum (Aluno t [], int N, int ind[]) {
    for (int i = 0; i < N; i++) ind[i] = i;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i; j < N - 1; j++) {
            if (t[ind[j]].numero > t[ind[j+1]].numero) swap(&ind[j], &ind[j+1]);
        }
    }
}

// 5

void imprimeTurma (int ind[], Aluno t[], int N) {
    criaIndPorNum(t, N, ind);
    for (int i = 0; i < N; i++) {
        printf("%d, \"%s\", {", t[ind[i]].numero, t[ind[i]].nome);
        for (int j = 0; j < 5; j++) printf("%d,", t[ind[i]].miniT[j]);
        printf("%d}, %.1f\n", t[ind[i]].miniT[5], t[ind[i]].teste);
    }
}

// 6

int procuraNum2 (int num, Aluno t[], int N, int ind[]) {
    int len = N - 1;
    N = N/2;
    while (N >= 0 && N <= len) {
        if(t[ind[N]].numero == num) return ind[N];
        else if (t[ind[N]].numero < num) N = N + N/2; 
        else if (t[ind[N]].numero > num) N = N/2;
    }
    return -1;
}

// 7

void criaIndPorNome (Aluno t [], int N, int ind[]) {
    for (int i = 0; i < N; i++) ind[i] = i;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i; j < N - 1; j++) {
            if (strcmp(t[ind[j]].nome, t[ind[j + 1]].nome) > 0) swap(&ind[j], &ind[j+1]);
        }
    }
}

int main() {
    return 0;
}
