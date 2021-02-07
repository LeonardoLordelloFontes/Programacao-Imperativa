#include <stdio.h>
#include <stdlib.h>

// Exercicio 1
/*
a)

1 1 4
2 2 6
3 3 8
4 4 10
5 5 12

b)

13

*/

// Exerc�cio 2

void swapM (int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp;

}

// Exerc�cio 3

void swap (int v[], int i, int j) {

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

// Exerc�cio 4

int soma (int v[], int N) {

    int resultado = 0;

    for (int i = 0; i < N; i++) {

        resultado += v[i];

    }

    return resultado;

}

// Exerc�cio 5

int maximum (int v[], int N, int *m) {

    if (N <= 0)
        return 1;

    else {

        *m = v[0];

        for (int i = 0; i < N; i++) {

            if (v[i] > *m)
                *m = v[i];

        return 0;

        }
    }
}

// Exerc�cio 6

void quadrados (int q[], int N) {

    for (int i = 0; i < N; i++) {

        q[i] = (i + 1)*(i + 1);

    }

}

// Exerc�cio 7


void pascal (int v[], int N) {

    int contador = 0;

    for (int i = 0; i < N; i++) {

        v[contador] = 1;

        for (int j = contador - 1; j >= 0; j--) {

            if (j >= 1)
                v[j] += v[j-1];

            }

        contador++;
    }

}


main () {

}
