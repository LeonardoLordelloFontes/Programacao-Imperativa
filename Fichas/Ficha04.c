#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Exerc�cio 1

int minusculas (char s[]) {

    int contador = 0;

    for (int i = 0; s[i]; i++) {

        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a' - 'A';
            contador++;

        }

    }

    return contador;

}

// Exerc�cio 2

int contalinhas (char s[]) {

    int linhas = 1;

    for (int i = 0; s[i]; i++) {

        if (s[i] == '\n')
            linhas++;

    }

    return linhas;
}

// Exerc�cio 3

int ContaPal (char s[]) {

    int palavras = 0;

    for (int i = 0; s[i]; i++) {

        if (isspace(s[i]))
            palavras++;

    }

    return palavras;
}

// Exerc�cio 4

int procura (char *p, char *ps[], int N) {

    for (int i = 0; i < N; i++) {

        if (strcmp (p, ps[i]) == 0) // strcmp retorna o valor 0 quando as strings s�o iguais
            return i + 1;

    }
    return 0;
}

// Exerc�cio 5

int procura2 (char *p, char *ps[], int N) {

    for (int i = 0; i < N; i++) {

        int comparar = strcmp(p, ps[i]);

        if (comparar == -1)
            return 0;

        else if (comparar == 0)
            return i + 1;
    }

    return 0;

}

// Exerc�cio 6

int ProcuraBinIterativa (char *p, char *ps[], int N) {


}

// Exerc�cio 7

int zeros (int N, int M, int m[N][M]) {

    int contador = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {

            if (m[i][j] == 0)
                contador++;
        }
    }

    return contador;

}

// Exerc�cio 8

void identidade (int N, int m[N][N]) {


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (i == j)
                m[i][j] = 1;

            else
                m[i][j] = 0;
        }
    }
}

// Exerc�cio 9

void multV (int N, float t[N][N], float v[N], float r[N]) {

    for (int i = 0; i < N; i++) {

        int soma = 0;

        for (int j = 0; j < N; j++) {

            soma += t[i][j] * v[j];

        }

        r[i] = soma;

    }
}

int main () {

    char *p = "casBZaWdXvcs";
    char *ps[] = {"asasasas", "basBZaWdXvcs"};

    return 0;
}
